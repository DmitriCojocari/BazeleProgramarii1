#include <iostream>

using namespace std;

int main()
{
    int i, nr, max;
    unsigned int n;
    cout << "Numarul de numere : ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        cout << "nr=";
        cin >> nr;
        max = nr;
        if (max < nr)
        {
            max = nr;
        }
        i++;
    }

    cout << "Valoarea maxima din numerele introduse : " << max;
    return 0;
}