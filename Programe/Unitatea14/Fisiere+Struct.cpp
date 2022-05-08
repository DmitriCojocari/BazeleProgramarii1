#include <iostream>
#include <fstream>
#include <map>
#include <set>

using namespace std;

struct Data
{
    short zi;
    short luna;
    short an;
};

struct Cititor
{
    string idLegitimatie;
    string numeCititor;
    string idCarte;
    struct Data dataImprumut;
};

int main()
{
    //numarul de cititori
    unsigned n;
    struct Cititor cititori[100];
    ifstream readFile;
    //deschidem fisierul pentru citire
    readFile.open("biblioteca.in", ios::in);
    //daca s-a deschis
    if (readFile.is_open())
    {
        //citim din prima linie a fisierului numarul de cititori
        readFile >> n;
        for (unsigned i = 0; i < n; i++)
        {
            //citim datele despre fiecare imprumut
            readFile >> cititori[i].idLegitimatie >> cititori[i].numeCititor >> cititori[i].idCarte >> cititori[i].dataImprumut.zi >> cititori[i].dataImprumut.luna >> cititori[i].dataImprumut.an;
        }
        //inchidem fisierul
        readFile.close();
    }
    //afisam ceea ce am citit din fisier
    for (unsigned i = 0; i < n; i++)
    {
        cout << cititori[i].idLegitimatie << " "
             << cititori[i].numeCititor << " "
             << cititori[i].idCarte << " "
             << cititori[i].dataImprumut.zi << " "
             << cititori[i].dataImprumut.luna << " "
             << cititori[i].dataImprumut.an << endl;
    }
    //introducem data curenta (pentru a verifica cine are imprumuturi de mai putin de o luna)
    short currentDay, currentMonth, currentYear;
    cout << "Introduceti data curenta : " << endl;
    cout << "Ziua : ";
    cin >> currentDay;
    cout << "Luna : ";
    cin >> currentMonth;
    cout << "Anul : ";
    cin >> currentYear;
    cout << "Imprumuturi pana la 1 luna : " << endl;
    for (unsigned i = 0; i < n && cititori[i].dataImprumut.an == 2021; i++)
    {
        //luna curenta este ianuarie, verificam zilele din decembrie anul trecut
        bool cond1 = currentMonth == 1 && currentYear - cititori[i].dataImprumut.an == 1 && cititori[i].dataImprumut.luna == 12 && cititori[i].dataImprumut.zi >= currentDay;
        //suntem in acelasi an, in aceeasi luna
        bool cond2 = currentYear == cititori[i].dataImprumut.an && cititori[i].dataImprumut.luna == currentMonth;
        //diferenta de luni este exact 1 si ziua imprumutului este strict mai mare decat ziua curenta
        bool cond3 = currentYear == cititori[i].dataImprumut.an && currentMonth - cititori[i].dataImprumut.luna == 1 && cititori[i].dataImprumut.zi > currentDay;
        if (cond1 || cond2 || cond3)
        {
            cout << cititori[i].idLegitimatie << " "
                 << cititori[i].numeCititor << " "
                 << cititori[i].idCarte << " "
                 << cititori[i].dataImprumut.zi << " "
                 << cititori[i].dataImprumut.luna << " "
                 << cititori[i].dataImprumut.an << endl;
        }
    }
    //multimap -> se poate repeta numele cititorului
    multimap<string, unsigned> readers;
    /* in map pastram doar valori cu cheie unica
    am putea folosi si set, pentru ca tot pastreaza valori unice, dar am vrut sa pastrez si numarul imprumuturilor a fiecarui cititor
    si sa nu calculez din set de fiecare data
    */
    map<string, unsigned> readersUnique;
    for (unsigned i = 0; i < n; i++)
    {
        //inseram toti cititorii, initial toti vor avea contorul setat cu 1
        readers.insert(pair<string, unsigned>(cititori[i].numeCititor, 1));
    }
    for (auto const &x : readers)
    {
        //inseram in map numele si numarul de aparitii al acestuia din multimap (cate carti a luat fiecare cititor)
        readersUnique.insert(pair<string, unsigned>(x.first, readers.count(x.first)));
    }
    cout << "Persoane cu mai mult de 1 carte imprumutata : " << endl;
    for (auto const &reader : readersUnique)
    {
        //daca value (numarul de imprumuturi) e mai mare ca 1
        if (reader.second > 1)
        {
            cout << reader.first << " : " << reader.second << endl;
        }
    }
    //Ne trebuie si data resituirii, pentru a vedea daca o carte este sau nu imprumutata (4.6)
    multimap<string, string> datorii;
    for (unsigned i = 0; i < n; i++)
    {
        bool cond1 = currentYear - cititori[i].dataImprumut.an == 1 && currentMonth > cititori[i].dataImprumut.luna;
        bool cond2 = currentYear - cititori[i].dataImprumut.an == 1 && currentMonth == cititori[i].dataImprumut.luna && currentDay > cititori[i].dataImprumut.zi;
        bool cond3 = currentYear - cititori[i].dataImprumut.an >= 2;
        if (cond1 || cond2 || cond3)
        {
            datorii.insert(pair<string, string>(cititori[i].numeCititor, cititori[i].idCarte));
        }
    }
    cout << "Persoane cu datorii : " << endl;
    for (const auto &dator : datorii)
    {
        cout << dator.first << " " << dator.second << endl;
    }
    return 0;
}