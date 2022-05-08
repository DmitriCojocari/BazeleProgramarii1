#include <iostream>

using namespace std;

int main() {
    int an, luna, ziua, nr_ord;
    cout<<"Anul: ";
    cin>>an;
    cout<<"Luna: ";
    cin>>luna;
    cout<<"Ziua: ";
    cin>>ziua;

    switch(luna) {
        case 1: 
            nr_ord = ziua;
            break;
        case 2: 
            nr_ord = ziua + 31;
            break;
        case 3:
            nr_ord = ziua + 31 + 28;
            break;
        case 4:
            nr_ord = ziua + 2*31 + 28;
            break;
        case 5: 
            nr_ord = ziua + 2*31 + 28 + 30;
            break;
        case 6:
            nr_ord = ziua + 3*31 + 28 + 30;
            break;
        case 7:
            nr_ord = ziua + 3*31 + 28 + 2*30;
            break;
        case 8:
            nr_ord = ziua + 4*31 + 28 + 2*30;
            break;
        case 9:
            nr_ord = ziua + 5*31 + 28 + 2*30;
            break;
        case 10:
            nr_ord = ziua + 5*31 + 28 + 3*30;
            break;
        case 11: 
            nr_ord = ziua + 6*31 + 28 + 3*30;
            break;
        case 12:
            nr_ord = ziua + 6*31 + 28 + 4*30;
            break;
        default:
            cout<<"Luna invalida"<<endl;
            nr_ord = -1;
    }
    if (an%4==0) {
        nr_ord++;
    }
    cout<<"Ziua "<<ziua<<" a lunii "<<luna<<" a anului "<<an<<" este ziua " <<nr_ord<<" din an";
    return 0;
}