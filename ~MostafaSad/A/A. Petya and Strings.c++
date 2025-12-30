

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum;
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
// int Sum(string s)
// {
//     int sum = 0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         sum += s[i];
//     }
//     return sum;
// }
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    s1 = to_Lower(s1);
    s2 = to_Lower(s2);
    // cout << (Sum(s1) < Sum(s2) ? "-1" : Sum(s1) > Sum(s2) ? "1"
    //                                                      : "0");
    cout << (s1 < s2 ? "-1" : s1 > s2 ? "1"
                                      : "0");
    // cout<<Sum(s1) <<" "<<Sum(s2);
    return 0;
}
