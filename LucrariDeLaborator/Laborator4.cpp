#include <iostream>

using namespace std;

int main()
{
    //problema 2

    unsigned n, k, nr, count;

    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;

    for (int i = 1; i <= n; i++)
    {
        cout << "nr" << i << "=";
        cin >> nr;
        count = 0;
        for (int j = 1; j <= nr; j++)
        {
            if (nr % j == 0)
            {
                count++;
            }
            if (count == k)
            {
                cout << "Numarul " << nr << " are exact " << k << " divizori" << endl;
            }
        }
    }

    return 0;
}