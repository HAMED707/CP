
#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int size = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        int firstin = i;
        for (int j = firstin + 1; j < s.length(); j++)
        {
            if (s[j] == s[firstin])
            {
                size--;
            }
        }
    }
    cout << (size % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}
