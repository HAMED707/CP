#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    float n, temp = 0, result = 0;
    cin >> n;
    float x = n;
    while ((x / n) <= 3)
    {
        int z = ceil(x / n);
        int finAl = (min(2, z) * pow(n, 2)) - x;
        if (z < 2)
        {
            int finAl = z * n * n - x;
        }
        else
        {
        }

        if (finAl > temp)
        {
            result = x;
            temp = finAl;
        }

        x++;
    }
    cout << temp;

    return 0;
}