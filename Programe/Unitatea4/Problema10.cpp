#include <iostream>

using namespace std;

int main() {
    float t_c, t_f, t_k;
    cout<<"Temperatura in grade Celsius: ";
    cin>>t_c;

    t_f=(t_c*1.8)+32;
    t_k=t_c+273.15;

    cout<<"Temperatura in grade Fahrenheit: "<<t_f;
    cout<<"\nTemperatura in grade Kelvin: "<<t_k;
    return 0;
}