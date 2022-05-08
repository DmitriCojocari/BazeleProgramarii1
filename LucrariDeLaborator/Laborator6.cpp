#include <iostream>

using namespace std;

void MinMax(float, float);

int main()
{
    //problema2

    float a, b;

    cout << "nr1=";
    cin >> a;
    cout << "nr2=";
    cin >> b;

    MinMax(a, b);

    return 0;
}

void MinMax(float x, float y)
{
    float min, max;
    if (x < y)
    {
        min = x;
        max = y;
    }
    else
    {
        max = x;
        min = y;
    }
    cout << "Minimul este " << min;
    cout << "\nMaximul este " << max;
}