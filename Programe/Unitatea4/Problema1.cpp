#include <iostream>

using namespace std;

int main() {
    unsigned int k, h, min, s;
    cout<<"Numarul de secunde : ";
    cin>>k;

    h = k / 3600;
    k = k % 3600;
    min = k / 60;
    k = k % 60;
    s = k;

    cout<<h<<" ore "<<min<<" minute "<<s<<" secunde";
    return 0;
}