#include <iostream>

using namespace std;

int main() {
    float x,y;
    cout<<"Abscisa punctului: ";
    cin>>x;
    cout<<"Ordonata punctului: ";
    cin>>y;

    if (x==0 && y==0) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla in originea sistemului de axe ortogonale";
    }
    if (x>0 && y>0) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla in cadranul 1";
    }
    if (x<0 && y>0) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla in cadranul 2";
    }
    if (x<0 && y<0) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla in cadranul 3";
    }
    if (x>0 && y<0) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla in cadranul 4";
    }
    if (x==y) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla pe bisectoarea cadranelor 1 si 3";
    }
    if (x==-y) {
        cout<<"Punctul "<<"("<<x<<";"<<y<<")"<<" se afla pe bisectoarea cadranelor 2 si 4";
    }
    return 0;
}