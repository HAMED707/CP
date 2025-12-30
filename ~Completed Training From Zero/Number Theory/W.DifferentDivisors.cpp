#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


vector<int> find_divisors(int x) {
    vector<int> divisors;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            divisors.push_back(i);
            if (i != x / i) {
                divisors.push_back(x / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

bool valid_divisors(const vector<int>& divisors, int d) {
    for (int i = 0; i < divisors.size() - 1; i++) {
        if (divisors[i+1] - divisors[i] < d) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int d;
        cin >> d;

        int a = 1;

        while (true) {
            vector<int> divisors = find_divisors(a);

            if (divisors.size() >= 4 && valid_divisors(divisors, d)) {
                cout << a << '\n';
                break;
            }

            a++;
        }
    }

    return 0;
}
