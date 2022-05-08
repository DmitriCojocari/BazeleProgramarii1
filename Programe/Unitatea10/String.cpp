#include <iostream>
#include <ctype.h>

using namespace std;

unsigned countDigits(string);
unsigned countVowels(string);
void printReversedString(string);
bool haveA(string);
bool isSentence(string);
unsigned countConsonants(string);
unsigned countCapitals(string);
unsigned countLowers(string);
string upperToLower(string);
unsigned countAppearances(char, string);

int main()
{
    string s;
    char x;
    cout << "String: ";
    cin >> s;
    cout << "The string " << s << " has " << countDigits(s) << " digits";
    cout << "\nThe string " << s << " has " << countVowels(s) << " vowels";
    cout << "\nReversed string: ";
    printReversedString(s);
    haveA(s) ? cout << "\nThe string " << s << " contains the character 'a'" : cout << "\nThe string " << s << " doesn't contain the character 'a'";
    isSentence(s) ? cout << "\nThe string " << s << " contains only letters and '.'" : cout << "\nThe string " << s << " doesn't contain only letters and '.'";
    cout << "\nThe string " << s << " has " << countConsonants(s) << " consonants";
    cout << "\nThe string " << s << " has " << countCapitals(s) << " capital letters";
    cout << "\nThe string " << s << " has " << countLowers(s) << " lowercase letters";
    cout << "\nChanging upper case to lowercase letters: " << upperToLower(s);
    cout << "\nChar to count appearances: ";
    cin >> x;
    cout << x << " appears in the string " << s << " " << countAppearances(x, s) << " times";
    return 0;
}

unsigned countDigits(string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            count++;
        }
    }
    return count;
}

unsigned countVowels(string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

void printReversedString(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

bool haveA(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            return true;
        }
    }
    return false;
}

bool isSentence(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (!isalpha(s[i]) || s[i] != '.')
        {
            return false;
        }
    }
    return true;
}

unsigned countConsonants(string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (isalpha(s[i]))
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                count++;
            }
        }
    }
    return count;
}

unsigned countCapitals(string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}

unsigned countLowers(string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            count++;
        }
    }
    return count;
}

string upperToLower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

unsigned countAppearances(char x, string s)
{
    unsigned count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x)
        {
            count++;
        }
    }
    return count;
}
