#include <iostream>

using namespace std;

int main() {
    float s, p, s_final;
    unsigned int x;
    cout<<"Suma depusa de client: ";
    cin>>s;
    cout<<"Dobanda in procente: ";
    cin>>p;
    cout<<"Perioada in ani: ";
    cin>>x;

    s_final=s+(s*p/100.0)*x;

    cout<<"Suma dupa " <<x<<" ani: "<<s_final;
    return 0;
}