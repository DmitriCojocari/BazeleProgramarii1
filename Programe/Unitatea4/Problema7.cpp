#include <iostream>

using namespace std;

int main() {
    float p1, p2, p3, x, y, z;
    cout<<"Pretul unui kilogram de bomboane: ";
    cin>>p1;
    cout<<"Pretul unui kilogram de biscuiti: ";
    cin>>p2;
    cout<<"Pretul unui kilogram de mere: ";
    cin>>p3;
    cout<<"Cantitatea de bomboane (in kg) : ";
    cin>>x;
    cout<<"Cantitatea de biscuiti (in kg) : ";
    cin>>y;
    cout<<"Cantitatea de mere (in kg) : ";
    cin>>z;

    cout<<"Costul pentru "<<x<<" kilograme de bomboane: "<<(p1*x);
    cout<<"\nCostul pentru "<<y<<" kilograme de biscuiti: "<<(p2*y);
    cout<<"\nCostul pentru "<<z<<" kilograme de mere: "<<(p3*z);
    cout<<"\nCostul cumparaturii: "<<((p1*x)+(p2*y)+(p3*z));
    return 0;
}