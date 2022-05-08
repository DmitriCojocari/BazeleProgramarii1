#include <iostream>

using namespace std;

void createArray(int[10][10], int);
void displayArray(int[10][10], int);

int main()
{
    int a[10][10], b[10][10], n;
    cout << "Dimensiunea n=";
    cin >> n;
    createArray(a, n);
    cout << "Matricea A: " << endl;
    displayArray(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = (a[i][j] + a[j][i]) / 2;
        }
    }
    cout << "Matricea nou-formata B: " << endl;
    displayArray(b, n);
    return 0;
}

void createArray(int a[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 5 - 3;
        }
    }
}

void displayArray(int a[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}