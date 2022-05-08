#include <iostream>

using namespace std; 

void displayArray(int a[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int a[10][10], n, m;
    cout<<"Rows: "; cin>>n;
    cout<<"Columns: "; cin>>m;
    int count=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            count++;
            a[i][j]=count;
        }
    }
    displayArray(a, n, m);
    return 0;
}