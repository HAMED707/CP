
#include <iostream>

using namespace std;

int main()
{
    int gameNum, Dscore = 0, Ascore = 0;
    string s;
    cin >> gameNum >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 65)
        {
            Dscore++;
        }
        else if (s[i] == 65)
        {
            Ascore++;
        }
    }
    cout << (Ascore > Dscore ? "Anton" : Ascore < Dscore ? "Danik"
                                                         : "Friendship");

    return 0;
}
