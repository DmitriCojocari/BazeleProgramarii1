#include <iostream>

using namespace std;

int main()
{
    unsigned int nr, prod, i;
    cout << "Numarul pentru factorial : ";
    cin >> nr;

    prod = 1;
    i = 1;
    while (i <= nr)
    {
        prod *= i;
        i++;
    }
    cout << nr << "!=" << prod;
    return 0;
}