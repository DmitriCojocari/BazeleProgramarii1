#include <iostream>

using namespace std;

int main() {
    unsigned int n, m, min, n_final, m_final;
    cout<<"Ora inceperii: ";
    cin>>n;
    cout<<"Minutul inceperii: ";
    cin>>m;

    min = (n*60 + m + 6*45 + 2*20 + 3*10);
    n_final = min / 60;
    m_final = min % 60;

    cout<<"Ora finalizarii: "<<n_final<<":"<<m_final;
    return 0;
}