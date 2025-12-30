
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s, conc = "";

//     cin >> s;
//     while (!s.empty())
//     {

//         char res1 = s.front();
//         char res2 = s.back();

//         conc += res1;
//         conc += res2;
//         s.pop_back();
//         s.erase(s.begin());
//         reverse(s.begin(), s.end());
//     }
//     cout << conc;

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, conc = "";
    int attemp = 1;
    cin >> s;
    int begin = 0, end = s.length() - 1;
    while (begin <= end)
    {
        attemp++;
        char res1 = s[begin++];
        char res2 = s[end--];
        if (attemp % 2 == 0)
        {
            swap(s[begin], s[end]);
        }

        conc += res1;
        conc += res2;
    }
    cout << conc;

    return 0;
}
