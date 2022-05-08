#include <iostream>

using namespace std;

int main() {
    //step 1: data input
    float b1,b2,h,s;
    cout<<"Baza mica=";
    cin>>b1;
    cout<<"Baza mare=";
    cin>>b2;
    cout<<"Inaltimea=";
    cin>>h;

    //step 2: data computing
    s=(b1+b2)/2.0*h;

    //step 3: data output
    cout<<"Aria="<<s;
    return 0;
}