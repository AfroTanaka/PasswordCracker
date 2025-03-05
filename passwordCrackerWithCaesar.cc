// This code is to decipher the string 'text' using Caesar cipher, which consists only of alphabet characters.
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

string input(string s)
{
    cout << "Target text: ";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();
    return s;
}

void decipherWithCaesar(string s)
{
    for (int i = 0; i <= 26; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            cout << "\033[32m" << (char)((s[j] - 'a' + i) % 26 + 'a') << "\033[0m";
        }
        cout << endl;
        cin.ignore();
        cin.clear();
    }
}

string wrapper_to_lower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string s;
    decipherWithCaesar(wrapper_to_lower(input(s)));
    return 0;
}