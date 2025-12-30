#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int indexMin, a[n];
    for (int z = 0; z < n; z++)
    {
        cin >> a[z];
    }

    for (int i = 0; i < n - 1; i++)
    {
        indexMin = i;
        for (int j = indexMin + 1; j < n; j++)
        {
            if (a[j] < a[indexMin])
            {
                indexMin = j;
            }
        }
        swap(a[indexMin], a[i]);
    }
    for (int elem : a)
    {
        cout << elem << " ";
    }

    return 0;
}
