#include <iostream>

using namespace std;

int main() {
    //step 1: data introduction
    float x;
    cout<<"Enter the angle in radians: ";
    cin>>x;

    //step 2: data computing
    //step 2.1 : compute the degree value
    x=x*180/3.14; //convert the value of x in radians into degrees
    int g;
    g=x; //we extract the integral part of the obtained value, because the degrees can only be integer

    //step 2.2 : compute the minutes value
    float r1;
    r1=x-g; //we compute the fractional part of the degrees value so we can proceed with the computing of the minutes and seconds.
    int m;
    m=r1*60.0; //we compute the minutes by multiplying the fractional part by 60

    //step 2.3 : compute the seconds value
    float r2;
    r2=r1-m/60.0; //we can still have a fractionary part in our minutes value, so we have to transform it into seconds
    int s;
    s=r2*3600;

    //step 3: the out data
    cout<<g<<" degrees, "<<m<<" minutes"<<" and "<<s<<" seconds";

    return 0;
}