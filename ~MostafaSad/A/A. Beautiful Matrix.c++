
// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int arr[5][5], result;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 result = abs(i - 2) + abs(j - 2);
//             }
//         }
//     }
//     cout << result << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{

    for (int i = 0, arr; cin >> arr; i++)
        for (int j = 0; j < 5; j++)
            if (arr)
                cout << abs(i - 2) + abs(j - 2);

    return 0;
}
