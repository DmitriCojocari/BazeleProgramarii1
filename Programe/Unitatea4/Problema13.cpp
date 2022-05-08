#include <iostream>

using namespace std;

int main() {
    float n, k, x, s_ramas;
    cout<<"Pretul automobilului vechi: ";
    cin>>n;
    cout<<"Suma de pe contul bancar al familiei: ";
    cin>>k;
    cout<<"Pretul automobilului dorit: ";
    cin>>x;

    s_ramas=n+k-x;

    cout<<"Familia va ramane cu: "<<s_ramas<<" lei";
    return 0;
}