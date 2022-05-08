#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    //step 1: data input
    cout<<"n=";
    cin>>n;

    unsigned int s1, s2;
    //step 2: data computing
    //step 2.1 : compute the sum of the first two digits 
    s1=n / 1000 + (n / 100) % 10;
    //step 2.2 : compute the sum of the last two digits
    s2=n % 10 + (n % 100) / 10;

    //step 3: data output
    cout<<"The sum of the first two digits is: "<<s1;
    cout<<"\nThe sum of the last two digits is: "<<s2;
    return 0;
}