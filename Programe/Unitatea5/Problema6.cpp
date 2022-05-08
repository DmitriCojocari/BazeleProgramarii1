#include <iostream>

using namespace std;

int main() {
    unsigned int h1,min1,s1,ms1,h2,min2,s2,ms2,h3,min3,s3,ms3;
    cout<<"Ora 1: ";
    cin>>h1;
    cout<<"Minutul 1: ";
    cin>>min1;
    cout<<"Secunda 1: ";
    cin>>s1;
    cout<<"Milisecunda 1: ";
    cin>>ms1;
    cout<<"Ora 2: ";
    cin>>h2;
    cout<<"Minutul 2: ";
    cin>>min2;
    cout<<"Secunda 2: ";
    cin>>s2;
    cout<<"Milisecunda 2: ";
    cin>>ms2;

    h3=h1+h2;
    min3=min1+min2;
    s3=s1+s2;
    ms3=ms1+ms2;
    if (ms3>=100) {
        s3=s3+1;
        ms3=ms3-100;
    }
    if (s3>=60) {
        min3=min3+1;
        s3=s3-60;
    }
    if (min3>=60) {
        h3=h3+1;
        min3=min3-60;
    }

    cout<<"Ora rezultat: "<<h3<<":"<<min3<<":"<<s3<<":"<<ms3;
    return 0;
}