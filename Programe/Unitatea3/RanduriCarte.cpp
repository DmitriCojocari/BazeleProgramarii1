#include <iostream>

using namespace std;

int main() {
    //step 1: data input
    unsigned int nr_f, nr_r, nr_tot;
    cout<<"Nr. de foi din carte: ";
    cin>>nr_f;
    cout<<"Nr. de randuri de pe o pagina: ";
    cin>>nr_r;

    //step 2: data computing
    nr_tot=nr_f*nr_r;

    //step 3: data output
    cout<<"Nr. total de randuri din carte: "<<nr_tot;
    return 0;
}