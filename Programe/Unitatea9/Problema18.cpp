#include <iostream>

using namespace std;

void InputVector(int[], unsigned);
void DisplayVector(int[], unsigned);

int main()
{
    int a[20], s1, s2;
    unsigned n;
    cout << "n=";
    cin >> n;
    InputVector(a, n);
    DisplayVector(a, n);
    s1 = -a[0];
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            s1 += a[i];
        }
        else
        {
            s1 -= a[i];
        }
    }
    cout << "Suma: " << s1;
    s2 = 0;
    for (int i = 0; i < n / 2; i++)
    {
        s2 = s2 + a[2 * i + 1] - a[2 * i];
    }
    cout << "\nSuma 2: " << s2;
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