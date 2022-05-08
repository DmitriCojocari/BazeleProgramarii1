#include <iostream>

using namespace std;

float Sum(float, float);
float Prod(float, float);

int main()
{
    float x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "Sum=" << Sum(x, y);
    cout << "\nProduct=" << Prod(x, y);
    return 0;
}

float Sum(float a, float b)
{
    return a + b;
}

float Prod(float a, float b)
{
    return a * b;
}