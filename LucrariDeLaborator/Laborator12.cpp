#include <iostream>
#include <string>

using namespace std;

struct Elev
{
    string nume;
    string prenume;
    float medie;
    unsigned absente;
};

int main()
{
    unsigned n;
    float s = 0.0, med;
    cout << "Numarul de elevi din clasa : ";
    cin >> n;
    struct Elev elevi[100];

    for (unsigned i = 0; i < n; i++)
    {
        cout << "Datele elevului " << i + 1 << " : ";
        cin >> elevi[i].nume >> elevi[i].prenume >> elevi[i].medie >> elevi[i].absente;
    }

    cout << "\nLista clasei :" << endl;
    for (unsigned i = 0; i < n; i++)
    {
        cout << elevi[i].nume << " " << elevi[i].prenume << " " << elevi[i].medie << " " << elevi[i].absente << endl;
    }

    cout << "\nLista elevilor cu media peste 8 :" << endl;
    for (unsigned i = 0; i < n; i++)
    {
        if (elevi[i].medie > 8.0)
        {
            cout << elevi[i].nume << " " << elevi[i].prenume << endl;
        }
    }

    cout << "\nLista elevilor cu peste 30 de absente : " << endl;
    for (unsigned i = 0; i < n; i++)
    {
        if (elevi[i].absente > 30)
        {
            cout << elevi[i].nume << " " << elevi[i].prenume << endl;
        }
    }

    for (unsigned i = 0; i < n; i++)
    {
        s += elevi[i].medie;
    }

    med = s / n;
    cout << "\nMedia clasei : " << med;
    return 0;
}