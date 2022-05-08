#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Valorile interschimbate: ";
    cout<<"\na="<<a;
    cout<<"\nb="<<b;
    return 0;
}