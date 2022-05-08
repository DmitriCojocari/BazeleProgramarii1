#include <iostream>

using namespace std;

unsigned SumDivisors(unsigned);
unsigned CountDivisors(unsigned);

int main()
{
    unsigned x;
    cout << "x=";
    cin >> x;
    cout << x << " has " << CountDivisors(x) << " divisors";
    cout << "\nSum of divisors of " << x << ": " << SumDivisors(x);
    return 0;
}

unsigned SumDivisors(unsigned n)
{
    unsigned s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    return s;
}

unsigned CountDivisors(unsigned n)
{
    unsigned count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}
