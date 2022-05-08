#include <iostream>

using namespace std;

void InputVector(int[], unsigned);
void DisplayVector(int[], unsigned);
bool IsDifferent(int[], unsigned);

int main()
{
    int a[20];
    unsigned n;
    cout << "n = ";
    cin >> n;
    InputVector(a, n);
    DisplayVector(a, n);
    IsDifferent(a, n) ? cout << "\nVectorul contine doar elemente distincte" : cout << "\nVectorul nu contine doar elemente distincte";
    return 0;
}

void InputVector(int a[20], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]=";
        cin >> a[i];
    }
}

void DisplayVector(int a[20], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

bool IsDifferent(int a[20], unsigned n)
{
    bool different = true;
    for (int i = 0; i < n && different; i++)
    {
        int value = a[i];
        unsigned k = i + 1;
        while (k < n && different)
        {
            if (value == a[k])
            {
                return false;
            }
            k++;
        }
    }
    return different;
}