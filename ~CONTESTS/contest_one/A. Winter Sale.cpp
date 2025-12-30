#include <iostream>

using namespace std;
int main()
{
    float a, b, x;
    cin >> a >> b;

    x = (b / (100 - a)) * 100;
    cout << x;

    return 0;
}