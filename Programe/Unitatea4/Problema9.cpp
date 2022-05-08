#include <iostream>

using namespace std;

int main() {
    float r, w, n, s_final;
    cout<<"Suma depusa pe cont: ";
    cin>>r;
    cout<<"Procentul lunar de marire: ";
    cin>>w;
    cout<<"Numarul de luni: ";
    cin>>n;

    s_final=r+(r*w/100.0)*n;

    cout<<"Suma peste "<<n<<" luni "<<"va fi: "<<s_final;
    return 0;
}