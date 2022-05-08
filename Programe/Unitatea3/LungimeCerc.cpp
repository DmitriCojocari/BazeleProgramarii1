#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //step 1: data input
    float s, l, r;
    cout<<"Aria=";
    cin>>s;

    //step 2: data computing
    //step 2.1: compute the radius
    r=sqrt(s/3.14);
    //step 2.2: compute the length
    l=2*3.14*r;

    //step 3: data output
    cout<<"Lungimea="<<l;
    return 0;
}