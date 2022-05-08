#include <iostream>

using namespace std;

int main()
{
    //problema 2

    unsigned n, cf1, cf2, count;

    cout << "n = ";
    cin >> n;

    count = 0;
    while (n != 0)
    {
        if (n >= 10 && n <= 99)
        {
            cf1 = n / 10;
            cf2 = n % 10;
            if (cf1 == cf2)
            {
                count++;
            }
        }
        cout << "n=";
        cin >> n;
    }
    cout << "S-au introdus " << count << " numere de 2 cifre cu ambele cifre egale";

    return 0;
}