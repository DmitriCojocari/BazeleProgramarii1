#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n;
    cout << "n=";
    cin >> n;

    bool isPrime = true;
    if (n <= 1)
    {
        isPrime = false;
    }
    else if (n == 2 || n == 3 || n == 5)
    {
        isPrime = true;
    }
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
    {
        isPrime = false;
    }
    else
    {
        int i = 7;
        while (i <= sqrt(n) && isPrime)
        {
            if (n % i == 0)
            {
                isPrime = false;
            }
            i += 2;
        }
    }
    if (isPrime)
    {
        cout << "este prim";
    }
    else
    {
        cout << "nu este prim";
    }
    return 0;
}