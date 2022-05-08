#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //step 1: data input 
    float a,b,c,p,s;
    cout<<"cateta 1=";
    cin>>a;
    cout<<"cateta 2=";
    cin>>b;

    //step 2: data computing
    //step 2.1: hypotenuse computing
    c=sqrt(a*a+b*b);
    //step 2.2: perimeter computing
    p=a+b+c;
    //step 2.3: area computing
    s=(a*b)/2;

    //step 3: data output
    cout<<"Perimetrul="<<p;
    cout<<"\nAria="<<s;
    return 0;
}