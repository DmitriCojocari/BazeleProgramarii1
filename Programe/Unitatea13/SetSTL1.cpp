#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string word;
    cout << "Cuvantul : ";
    cin >> word;
    set<char> letters;
    for (unsigned i = 0; i < word.length(); i++)
    {
        if (isalpha(word[i]))
        {
            letters.insert(word[i]);
        }
    }
    //exemplu cautare in multime
    if (letters.count('a'))
    {
        cout << "exista" << endl;
    }
    cout << "Metoda 1 de afisare : ";
    for (auto &i : letters)
    {
        cout << i << " ";
    }
    cout << "\nMetoda 2 de afisare : ";
    set<char>::iterator it = letters.begin();
    while (it != letters.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << "\nCuvantul introdus are " << letters.size() << " litere distincte";
    return 0;
}