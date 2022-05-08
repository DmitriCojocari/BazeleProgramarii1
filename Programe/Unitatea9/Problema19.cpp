#include <iostream>

using namespace std;

int main()
{
    int x[20], y[20], z[20];
    unsigned n;
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]=";
        cin >> x[i];
        cout << "b[" << i + 1 << "]=";
        cin >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        z[i] = min(x[i], y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << z[i] << " ";
    }
    return 0;
}