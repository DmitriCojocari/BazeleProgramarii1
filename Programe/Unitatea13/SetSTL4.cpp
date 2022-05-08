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
        letters.insert(word[i]);
    }
    set<char>::iterator it = letters.begin();
    for (auto &i : letters)
    {
        cout << i << " ";
    }
    while (it != letters.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << "Cuvantul introdus are " << letters.size() << " litere distincte";
    return 0;
}