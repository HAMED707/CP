

#include <iostream>

using namespace std;
string to_Lower(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            s[i] += 32;
        }
    }
    return s;
}
string to_Upper(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] <= 122 && s[i] >= 97)
        {
            s[i] -= 32;
        }
    }
    return s;
}

int main()
{
    string s, s1, s2;
    int upper = 0, lower = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] < 97 ? upper++ : lower++;
    }

    upper > lower ? s1 = to_Upper(s) : s1 = to_Lower(s);
    cout << s1;

    return 0;
}
