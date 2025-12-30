#include <iostream>
using namespace std;

int main()
{
    int flag_A = 0, flag_B = 0;
    int counter;
    cin >> counter;

    while (counter--)
    {
        string s;

        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                flag_A++;
            }
            else if (s[i] == 'B')
            {
                flag_B++;
            }
        }

        if (flag_A > flag_B)
        {
            cout << 'A' << '\n';
        }
        else
        {
            cout << 'B' << '\n';
        }
        flag_A = 0;
        flag_B = 0;
    }
}