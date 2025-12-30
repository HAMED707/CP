
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;
    long long arr[n], possible = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= 0)
        {
            sum += arr[i];
        }
        else
        {
            possible--;
        }
    }
    cout << sum << " " << possible;

    return 0;
}
