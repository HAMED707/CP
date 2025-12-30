//
// Created by h70ab on 9/1/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (!isPerfectSquare(n)) {
            cout << "No" << endl;
            continue;
        }

        int r = sqrt(n);

        if (r == 1) {

            cout << (s == "1" ? "No" : "Yes") << endl;
            continue;
        }

        if (r == 2) {
            // For a 2x2 matrix, all elements must be '1'
            cout << (s == "1111" ? "Yes" : "No") << endl;
            continue;
        }

        // For larger matrices (r > 2)
        bool valid = true;

        // Check the top and bottom rows
        for (int i = 0; i < r; ++i) {
            if (s[i] != '1' || s[(r-1)*r + i] != '1') {
                valid = false;
                break;
            }
        }

        // Check the left and right columns of the inner rows
        for (int i = 1; i < r-1 && valid; ++i) {
            if (s[i*r] != '1' || s[i*r + (r-1)] != '1') {
                valid = false;
                break;
            }
        }

        cout << (valid ? "Yes" : "No") << endl;
    }

    return 0;
}
