#include <iostream>

using namespace std;

int main() {
    unsigned int z, n, o, s, p;
    float n_medie;
    cout<<"Note de 10: ";
    cin>>z;
    cout<<"Note de 9: ";
    cin>>n;
    cout<<"Note de 8: ";
    cin>>o;
    cout<<"Note de 7: ";
    cin>>s;
    cout<<"Note de 4: ";
    cin>>p;

    n_medie=(float)(z*10+n*9+o*8+s*7+p*4)/(z+n+o+s+p);

    cout<<"Nota medie a clasei: "<<n_medie;
    return 0;
}