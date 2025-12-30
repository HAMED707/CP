#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 1)
        {
            sum += pow(2, i);
        }
    }
    cout << sum;
    return 0;
}