#include <iostream>

using namespace std;

int main() {
    float a,b,c;
    cout<<"Latura 1: ";
    cin>>a;
    cout<<"Latura 2: ";
    cin>>b;
    cout<<"Latura 3: ";
    cin>>c;

    if (a==b && b==c) {
        cout<<"Triunghi echilateral";
    }
    else if (a==b || a==c || b==c) {
        cout<<"Triunghi isoscel";
    }
    else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) {
        cout<<"Triunghi dreptunghic";
    }
    else {
        cout<<"Triunghi scalen";
    }
    return 0;
}