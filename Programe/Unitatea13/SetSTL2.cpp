#include <iostream>
#include <set>

using namespace std;

int main()
{
    unsigned n, cf;
    cout << "n=";
    cin >> n;
    set<unsigned> digitsAscending;
    set<unsigned, greater<unsigned>> digitsDescending;
    while (n != 0)
    {
        cf = n % 10;
        digitsAscending.insert(cf);
        digitsDescending.insert(cf);
        n = n / 10;
    }
    cout << "Cifrele distincte crescator : ";
    for (auto &i : digitsAscending)
    {
        cout << i << " ";
    }
    cout << "\nCifrele distincte descrescator : ";
    for (auto &i : digitsDescending)
    {
        cout << i << " ";
    }

    return 0;
}