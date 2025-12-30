
#include <iostream>

using namespace std;

int main()
{
    int a, b, years = 0;
    cin >> a >> b;

    while (b >= a)
    {
        a *= 3;
        b *= 2;
        years++;
        if (a > b)
        {
            cout << years;
            break;
        }
    }

    return 0;
}
