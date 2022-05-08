#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    unsigned n1, n2, cf;
    cout << "First number : ";
    cin >> n1;
    cout << "Second number : ";
    cin >> n2;
    set<unsigned> digitsFirst, digitsSecond, reunionSet, intersectionSet, differenceSet;
    while (n1 != 0)
    {
        cf = n1 % 10;
        digitsFirst.insert(cf);
        n1 = n1 / 10;
    }
    while (n2 != 0)
    {
        cf = n2 % 10;
        digitsSecond.insert(cf);
        n2 = n2 / 10;
    }
    set_union(digitsFirst.begin(), digitsFirst.end(), digitsSecond.begin(), digitsSecond.end(), inserter(reunionSet, reunionSet.begin()));
    cout << "Reunion : ";
    for (auto &i : reunionSet)
    {
        cout << i << " ";
    }
    set_intersection(digitsFirst.begin(), digitsFirst.end(), digitsSecond.begin(), digitsSecond.end(), inserter(intersectionSet, intersectionSet.begin()));
    cout << "\nIntersection : ";
    for (auto &i : intersectionSet)
    {
        cout << i << " ";
    }
    set_difference(digitsFirst.begin(), digitsFirst.end(), digitsSecond.begin(), digitsSecond.end(), inserter(differenceSet, differenceSet.begin()));
    cout << "\nDifference : ";
    for (auto &i : differenceSet)
    {
        cout << i << " ";
    }
    return 0;
}