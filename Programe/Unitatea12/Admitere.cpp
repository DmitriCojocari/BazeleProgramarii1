#include <iostream>
#include <string>

using namespace std;

struct Data
{
    unsigned short zi;
    unsigned short luna;
    unsigned short an;
};

struct Elev
{
    string nume;
    string prenume;
    struct Data d_nast;
    float media;
    string resedinta;
    string telefon;
};

void inputData(struct Elev[], unsigned);
void printData(struct Elev[], unsigned);
float findMaxAvg(struct Elev[], unsigned);
void printWithMaxAvg(struct Elev[], unsigned);
float findMinAvg(struct Elev[], unsigned);
bool findFromBalti(struct Elev[], unsigned);
unsigned countWithMinAvg(struct Elev[], unsigned);
void findPhoneByName(struct Elev[], unsigned, string, string);
void sortDescending(struct Elev[], unsigned);

int main()
{
    struct Elev x[100];
    unsigned n;
    cout << "Numarul de persoane la admitere : ";
    cin >> n;

    inputData(x, n);
    cout << "Lista dosarelor : " << endl;
    printData(x, n);

    cout << "Media maxima : " << findMaxAvg(x, n) << endl;
    cout << "Studentii cu media maxima : " << endl;
    printWithMaxAvg(x, n);

    bool fromBalti = findFromBalti(x, n);
    (fromBalti) ? cout << "Sunt persoane din Balti" : cout << "Nu exista persoane din Balti";

    cout << "\nMedia minima : " << findMinAvg(x, n) << endl;
    cout << "Numarul de studenti cu media minima : " << countWithMinAvg(x, n) << endl;

    string numePersoana;
    string prenumePersoana;
    cout << "Numele persoanei a carei numar cautati : ";
    cin >> numePersoana;
    cout << "Prenumele persoanei a carei numar cautati : ";
    cin >> prenumePersoana;
    cout << "Numarul de telefon a persoanei cautate : ";
    findPhoneByName(x, n, numePersoana, prenumePersoana);

    sortDescending(x, n);
    cout << "\nLista candidatilor sortati in ordinea descendenta a mediilor : " << endl;
    printData(x, n);
    return 0;
}

void inputData(struct Elev x[100], unsigned n)
{
    for (unsigned i = 0; i < n; i++)
    {
        cout << "Numele elevului " << i + 1 << " : ";
        cin >> x[i].nume;
        cout << "Prenumele elevului " << i + 1 << " : ";
        cin >> x[i].prenume;
        cout << "Data nasterii : " << endl;
        cout << "Ziua : ";
        cin >> x[i].d_nast.zi;
        cout << "Luna : ";
        cin >> x[i].d_nast.luna;
        cout << "An : ";
        cin >> x[i].d_nast.an;
        cout << "Media BAC : ";
        cin >> x[i].media;
        cout << "Resedinta : ";
        cin >> x[i].resedinta;
        cout << "Numarul de telefon : ";
        cin >> x[i].telefon;
    }
}

void printData(struct Elev x[100], unsigned n)
{
    for (unsigned i = 0; i < n; i++)
    {
        cout << x[i].nume << " "
             << x[i].prenume << " "
             << x[i].d_nast.zi << " "
             << x[i].d_nast.luna << " "
             << x[i].d_nast.an << " "
             << x[i].media << " "
             << x[i].resedinta << " "
             << x[i].telefon << endl;
    }
}

float findMaxAvg(struct Elev x[100], unsigned n)
{
    float max = x[0].media;
    for (unsigned i = 1; i < n; i++)
    {
        if (x[i].media > max)
        {
            max = x[i].media;
        }
    }
    return max;
}

void printWithMaxAvg(struct Elev x[100], unsigned n)
{
    float max = findMaxAvg(x, n);
    for (unsigned i = 0; i < n; i++)
    {
        if (x[i].media == max)
        {
            cout << x[i].nume << " " << x[i].prenume << endl;
        }
    }
}

bool findFromBalti(struct Elev x[100], unsigned n)
{
    unsigned k = 0;
    while (k < n)
    {
        if (x[k].resedinta == "Balti")
        {
            return true;
        }
        k++;
    }
    return false;
}

float findMinAvg(struct Elev x[100], unsigned n)
{
    float min = x[0].media;
    for (unsigned i = 1; i < n; i++)
    {
        if (x[i].media < min)
        {
            min = x[i].media;
        }
    }
    return min;
}

unsigned countWithMinAvg(struct Elev x[100], unsigned n)
{
    float min = findMinAvg(x, n);
    unsigned count = 0;
    for (unsigned i = 0; i < n; i++)
    {
        if (x[i].media == min)
        {
            count++;
        }
    }
    return count;
}

void findPhoneByName(struct Elev x[100], unsigned n, string numePersoana, string prenumePersoana)
{
    for (unsigned i = 0; i < n; i++)
    {
        if (x[i].nume == numePersoana && x[i].prenume == prenumePersoana)
        {
            cout << x[i].telefon;
        }
    }
}

void sortDescending(struct Elev x[100], unsigned n)
{
    bool sortat = true;
    for (unsigned i = 0; i < n - 1 && sortat; i++)
    {
        sortat = false;
        for (unsigned j = 0; j < (n - i - 1); j++)
        {
            if (x[j].media < x[j + 1].media)
            {
                swap(x[j], x[j + 1]);
                sortat = true;
            }
        }
    }
}