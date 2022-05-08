#include <iostream>

using namespace std;

int main()
{
    int sum, count, nr;
    float avg;
    cout << "Numarul : ";
    cin >> nr;

    sum = 0;
    count = 0;
    avg = 0.0f;
    while (nr != 0)
    {
        sum = sum + nr;
        count++;
        avg = (float)sum / count;
        cout << "Numarul : ";
        cin >> nr;
    }
    cout << "Media numerelor introduse: " << avg;
    return 0;
}