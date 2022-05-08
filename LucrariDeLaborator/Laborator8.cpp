#include <iostream>

using namespace std;

void InitVector(int[], unsigned);
void ReplaceZero(int[], unsigned);
void PrintVector(int[], unsigned);

int main()
{
    int a[20];
    unsigned n;
    cout << "n=";
    cin >> n;
    InitVector(a, n);
    cout << "Vectorul initial: " << endl;
    PrintVector(a, n);
    ReplaceZero(a, n);
    cout << "\nVectorul modificat: " << endl;
    PrintVector(a, n);
    return 0;
}

void InitVector(int a[20], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]=";
        cin >> a[i];
    }
}

void ReplaceZero(int a[20], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = i * i;
        }
    }
}

void PrintVector(int a[20], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
