#include <iostream>

using namespace std;

int main() {
    float p1, p2, p3, p4, p5, n, s;
    cout<<"Pretul unui monitor: ";
    cin>>p1;
    cout<<"Pretul unui bloc de sistem: ";
    cin>>p2;
    cout<<"Pretul unei tastaturi: ";
    cin>>p3;
    cout<<"Pretul unui mouse: ";
    cin>>p4;
    cout<<"Pretul unei imprimante: ";
    cin>>p5;
    cout<<"Numarul de calculatoare de cumparat: ";
    cin>>n;

    s=(p1+p2+p3+p4+p5)*n;

    cout<<"Costul a "<<n<<" calculatoare este: "<<s<<" lei";
    return 0;
}