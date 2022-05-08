#include <iostream>

using namespace std;

string change(char, char, string);

int main()
{
    string s;
    char c1, c2;
    cout << "String: ";
    cin >> s;
    cout << "Letter to be substituted: ";
    cin >> c1;
    cout << "The substitute letter: ";
    cin >> c2;
    cout << "The string after changes: " << change(c1, c2, s);
    return 0;
}

string change(char c1, char c2, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
    }
    return s;
}