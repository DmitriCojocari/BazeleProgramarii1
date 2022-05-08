#include <iostream>

using namespace std;

int main() {
    unsigned int k,s,min,h;
    cout<<"Secunde: ";
    cin>>k;
    h = k / 3600;
    k = k % 3600;
    min = k / 60;
    k = k % 60;
    s = k;
    cout<<"Ore "<<h<<" Minute "<<min<<" Secunde "<<s;
    return 0;
}