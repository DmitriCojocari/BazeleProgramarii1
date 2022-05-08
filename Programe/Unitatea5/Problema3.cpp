#include <iostream>

using namespace std;

int main() {
    int a,b,min,max;
    cout<<"Primul numar: ";
    cin>>a;
    cout<<"Al doilea numar: ";
    cin>>b;

    if (a<=b) {
        min=a;
        max=b;
    }
    else {
        min=b;
        max=a;
    }

    cout<<"Maximul este: "<<max;
    cout<<"\nMinimul este: "<<min;
    return 0;
}