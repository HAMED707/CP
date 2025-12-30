// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, height, minWidth = 0;
//     cin >> n >> height;

//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;

//         a <= height ? minWidth++ : minWidth += 2;
//     }
//     cout << minWidth;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n, height, a;
    cin >> n >> height;

    while (cin >> a)
    {
        if (a > height)
            n++;
    }
    cout << n;

    return 0;
}
