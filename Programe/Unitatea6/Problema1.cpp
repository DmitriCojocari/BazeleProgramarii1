#include <iostream>

using namespace std;

int main() {
    unsigned int count, k, nr;
    count=0; k=0;
    do {
        cout<<"Introdu numarul "<<count+1<<" : ";
        cin>>nr;
        if (nr>0) {
            k++;
        }
        count++;
    } while(count<10);
    cout<<"Ati introdus "<<k<<" numere pozitive";
    return 0;
}