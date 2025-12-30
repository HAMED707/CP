#include <iostream>

using namespace std;
int main()
{
    float a, b, x;
    cin >> a >> b;

    x = ((b * a) / 100) / (1 - (a / 100));
    cout << x + b;

    return 0;
}