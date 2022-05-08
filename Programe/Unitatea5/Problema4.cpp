#include <iostream>

using namespace std;

int main() {
    int n, b1, b2, b3;
    cout<<"Numarul dorit: ";
    cin>>n;
    cout<<"Primul numar pentru divizibilitate: ";
    cin>>b1;
    cout<<"Al doilea numar pentru divizibilitate: ";
    cin>>b2;
    cout<<"Al treilea numar pentru divizibilitate: ";
    cin>>b3;

    if ( n%b1 || n%b2 || n%b3) {
        cout<<n<<" nu este divizibil cu numerele "<<b1<<","<<b2<<" si "<<b3;
    }
    else {
        cout<<n<<" este divizibil cu numerele "<<b1<<", "<<b2<<" si "<<b3;
    }
    return 0;
}