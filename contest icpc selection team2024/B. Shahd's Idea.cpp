
#include <iostream>

using namespace std;

int main()
{
    char s;
    cin >> s;
    if (s == '>')
    {
        cout << "Rock";
    }
    else if (s == '#')
    {
        cout << "Scissors";
    }
    else if (s == 'o')
    {
        cout << "Paper  ";
    }

    return 0;
}
