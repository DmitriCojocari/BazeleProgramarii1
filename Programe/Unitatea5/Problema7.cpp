#include <iostream>

using namespace std;

int main() {
    unsigned int an, luna, nr_zile;
    cout<<"Anul: ";
    cin>>an;
    cout<<"Luna: ";
    cin>>luna;

    switch(luna) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            nr_zile=31;
            break;
        case 2: 
            nr_zile=28;
            break;
        case 4: case 6: case 9: case 11:
            nr_zile=30;
            break;
        default: 
            cout<<"Luna nevalida"<<endl;
            nr_zile=0;
    }
    if (an%4==0 && luna==2) {
        nr_zile++;
    }
    cout<<"Luna a "<<luna<<" a anului "<<an<<" are "<<nr_zile<<" zile";
    return 0;
}