#include <iostream>
#include <string>

using namespace std;

struct Data
{
    unsigned short zi;
    unsigned short luna;
    unsigned an;
};

struct Persoana
{
    string nume;
    struct Data Data_nast;
};

void inputData(Persoana[], unsigned);
void printData(Persoana[], unsigned);
void findByMonth(Persoana[], unsigned, unsigned);
void findByYear(Persoana[], unsigned, unsigned);
void findOldestPerson(Persoana[], unsigned);

int main()
{
    struct Persoana x[50];
    unsigned n, l, a, z;
    cout << "Number of persons : ";
    cin >> n;
    inputData(x, n);
    printData(x, n);
    cout << "Month to find : ";
    cin >> l;
    cout << "Year to find : ";
    cin >> a;
    cout << "Date to find : ";
    cin >> z;
    cout << "Persons born in month " << l << " : ";
    findByMonth(x, n, l);
    cout << "\nPersons born in year " << a << " : ";
    findByYear(x, n, a);
    cout << "\nOldest person : ";
    findOldestPerson(x, n);
    return 0;
}

void inputData(Persoana x[50], unsigned n)
{
    for (unsigned i = 0; i < n; i++)
    {
        cout << "Input data for person " << i + 1 << " : ";
        cin >> x[i].nume >> x[i].Data_nast.zi >> x[i].Data_nast.luna >> x[i].Data_nast.an;
    }
}

void printData(Persoana x[50], unsigned n)
{
    for (unsigned i = 0; i < n; i++)
    {
        cout << x[i].nume << " " << x[i].Data_nast.zi << " " << x[i].Data_nast.luna << " " << x[i].Data_nast.an << endl;
    }
}

void findByMonth(Persoana x[50], unsigned n, unsigned l)
{
    for (unsigned i = 0; i < n; i++)
    {
        if (x[i].Data_nast.luna == l)
        {
            cout << x[i].nume << " ";
        }
    }
}

void findByYear(Persoana x[50], unsigned n, unsigned a)
{
    for (unsigned i = 0; i < n; i++)
    {
        if (x[i].Data_nast.an == a)
        {
            cout << x[i].nume << " ";
        }
    }
}

void findOldestPerson(Persoana x[50], unsigned n)
{
    struct Persoana max = x[0];
    for (unsigned i = 1; i < n; i++)
    {
        if (x[i].Data_nast.an < max.Data_nast.an)
        {
            max = x[i];
        }
        else if (x[i].Data_nast.an == max.Data_nast.an)
        {
            if (x[i].Data_nast.luna < max.Data_nast.luna)
            {
                max = x[i];
            }
            else if (x[i].Data_nast.luna == max.Data_nast.luna)
            {
                if (x[i].Data_nast.zi < max.Data_nast.zi)
                {
                    max = x[i];
                }
            }
        }
    }
    cout << max.nume;
}