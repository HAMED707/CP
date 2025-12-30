#include <iostream>
using namespace std;

int main()
{
    int sum = 0, flag_B = 0;
    int counter;
    cin >> counter;

    while (counter--)
    {
        int inside;

        cin >> inside;

        int x[inside][inside];
        for (int i = 0; i < inside; i++)
        {
            for (int j = 0; j < inside; j++)
            {
                cin >> x[i][j];
            }
        }

        for (int i = 0; i < inside; i++)
        {

            for (int j = 0; j < inside; j++)
            {

                sum += x[i][j];
            }
        }

        cout << sum << endl;
    }
}