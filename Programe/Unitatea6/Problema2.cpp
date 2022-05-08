#include <iostream>

using namespace std;

int main()
{
    unsigned int nr, count;
    cout << "Numarul : ";
    cin >> nr;

    count = 0;
    while (nr != 0)
    {
        if ((nr > 9) && (nr < 100))
        {
            count++;
        }
        cout << "Numarul : ";
        cin >> nr;
    }
    cout << "S-au introdus " << count << " numere de 2 cifre";
    return 0;
}