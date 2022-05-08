#include <iostream>

using namespace std;

int main()
{
    int i, nr, count;
    i = 1;
    count = 0;
    while (i <= 10)
    {
        cout << "Numarul " << i << " = ";
        cin >> nr;
        if (nr > 0)
        {
            count++;
        }
        i++;
    }
    cout << "S-au introdus " << count << " numere pozitive";
    return 0;
}