#include <iostream>

using namespace std;

//problema 2, problema 13

void createArray(int[50][50], int, int);
void displayArray(int[50][50], int, int);
void changeMaxSign(int[50][50], int, int);
void swapRows(int[50][50], int, int);

int main()
{
    int a[50][50], n, m;
    cout << "Numarul de randuri: ";
    cin >> n;
    cout << "Numarul de coloane: ";
    cin >> m;
    createArray(a, n, m);
    displayArray(a, n, m);
    changeMaxSign(a, n, m);
    cout << "\nArray after some manipulations: " << endl;
    displayArray(a, n, m);
    cout << "\nArray after swapping the 2nd and the penultimate rows: " << endl;
    swapRows(a, n, m);
    displayArray(a, n, m);
    return 0;
}

void createArray(int a[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 5 - 3;
        }
    }
}

void displayArray(int a[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

void changeMaxSign(int a[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int max = a[i][0];
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        max = -(abs(max));
    }
}

void swapRows(int a[50][50], int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        swap(a[1][j], a[n - 2][j]);
    }
}