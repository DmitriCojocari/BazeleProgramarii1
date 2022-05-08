#include <iostream>

using namespace std;

int main() {
    unsigned int n_zile;
    float s, plata;
    
    cout<<"Nr. de zile frecventate: ";
    cin>>n_zile;
    cout<<"Plata lunara: ";
    cin>>s;

    plata=(float) s*(n_zile/30.0);

    cout<<"Suma spre plata: "<<plata;
    return 0;
}