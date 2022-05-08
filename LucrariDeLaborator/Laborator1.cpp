#include <iostream>

using namespace std;

int main()
{
    //problema 2
    int x;
    cout << "x = ";
    cin >> x;
    x = (x / 1000) * 10 + x % 10;
    cout << "new x = " << x;
    return 0;
}