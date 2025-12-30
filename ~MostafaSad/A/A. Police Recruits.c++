#include <iostream>

using namespace std;

int main()
{
    int counter, crime = 0, recruit = 0, x;
    cin >> counter;
    while (counter--)
    {
        cin >> x;
        if (x == -1)
        {
            if (recruit > 0)
            {
                recruit--;
            }
            else
            {
                crime++;
            }
        }
        else if (x > 0)
        {
            recruit += x;
        }
    }

    cout << crime;

    return 0;
}
