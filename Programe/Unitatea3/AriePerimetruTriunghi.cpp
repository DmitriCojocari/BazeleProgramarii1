#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //step 1: data input
    float a,b,c;
    cout<<"latura 1="; 
    cin>>a;
    cout<<"latura 2=";
    cin>>b;
    cout<<"latura 3=";
    cin>>c;

    //step 2: data computing
    float s,p,sp;
    //step 2.1: compute the perimeter
    p=a+b+c;
    //step 2.2: compute the area 
    sp=p/2.0;
    s=sqrt(sp*(sp-a)*(sp-b)*(sp-c));

    //step 3: output data
    cout<<"Aria="<<s;
    cout<<"\nPerimetrul="<<p;
    return 0;
}