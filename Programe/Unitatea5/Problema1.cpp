#include <iostream>

using namespace std;

int main() {
    float a,b,c,p;
    cout<<"Latura 1: ";
    cin>>a;
    cout<<"Latura 2: ";
    cin>>b;
    cout<<"Latura 3: ";
    cin>>c;

    if (a+b<=c || b+c<=a || a+c<=b) {
        cout<<"Nu poate exista un triunghi cu asemenea laturi";
    }
    else {
        cout<<"Un asemena triunghi exista";
        p=a+b+c;
        cout<<" si are perimetrul "<<p;
    }
    return 0;
}