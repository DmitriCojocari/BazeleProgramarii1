#include <iostream>

using namespace std;

int main() {
    float a,b,c;
    cout<<"Primul numar: ";
    cin>>a;
    cout<<"Al doilea numar: ";
    cin>>b;
    cout<<"Al treilea numar: ";
    cin>>c;

    cout<<"Media numerelor introduse: "<<(a+b+c)/3;
    cout<<"\nMedia numerelor impartita la al doilea numar: "<<((a+b+c)/3)/b;
    return 0;
}