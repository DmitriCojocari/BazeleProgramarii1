#include <iostream>

using namespace std;

int main() {
    float a,b,c,s,s_lat;
    cout<<"Lungimea: ";
    cin>>a;
    cout<<"Latimea: ";
    cin>>b;
    cout<<"Inaltimea: ";
    cin>>c;
    
    s=a*b;
    s_lat=2*(a+b)*c;
    
    cout<<"Aria podelei: "<<s;
    cout<<"\nAria laterala: "<<s_lat;
    return 0;
}