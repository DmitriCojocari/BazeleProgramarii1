#include <iostream>

using namespace std;

int main() {
    float l1, l2, s1, s2;
    cout<<"Latura primului patrat: ";
    cin>>l1;
    cout<<"Latura patratului al doilea: ";
    cin>>l2;

    s1=l1*l1;
    s2=l2*l2;

    cout<<"Aria primului patrat este cu "<<(s1-s2)<<" cm^2 (m^2) mai mare";
    return 0;
}