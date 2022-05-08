#include <iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

int main()
{
    //problema2
    int a, b, c;
    cout << "Nr.1=";
    cin >> a;
    cout << "Nr.2=";
    cin >> b;
    cout << "Nr.3=";
    cin >> c;

    cout << "Cel mai mic multiplu comun pentru " << a << "," << b << " si " << c << " este: " << lcm(a, lcm(b, c));
    return 0;
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}