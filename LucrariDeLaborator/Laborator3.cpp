#include <iostream>

using namespace std;

int main()
{
    //problema2

    unsigned zi;

    cout << "zi = ";
    cin >> zi;

    switch (zi)
    {
    case 1 ... 10:
        cout << "decada 1";
        break;
    case 11 ... 20:
        cout << "decada 2";
        break;
    case 21 ... 30:
        cout << "decada 3";
        break;
    case 31:
        cout << "decada 4";
        break;
    default:
        cout << "S-a introdus o zi in afara intervalului [1..31]";
        break;
    }

    return 0;
}