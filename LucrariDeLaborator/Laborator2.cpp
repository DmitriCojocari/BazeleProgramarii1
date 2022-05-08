#include <iostream>

using namespace std;

int main()
{

    //problema2
    float a, b, c;

    cout << "Latura 1 = ";
    cin >> a;
    cout << "Latura 2 = ";
    cin >> b;
    cout << "Latura 3 = ";
    cin >> c;

    if ((a <= 0 || b <= 0 || c <= 0) || (a + b <= c || a + c <= b || b + c <= a))
    {
        cout << "Lungimile laturilor introduse nu pot forma un triunghi";
    }
    else if (a == b && b == c)
    {
        cout << "Triunghi echilateral";
    }
    else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
    {
        cout << "Triunghi dreptunghic";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Triunghi isoscel";
    }
    else
    {
        cout << "Triunghi scalen";
    }
    return 0;
}