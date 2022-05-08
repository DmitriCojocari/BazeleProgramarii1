#include <iostream>

using namespace std;

void checkParity(int);

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    checkPrimality(n);
    return 0;
}

void checkParity(int n)
{
    (n % 2 == 0) ? cout << n << " is even" : cout << n << " is odd";
}