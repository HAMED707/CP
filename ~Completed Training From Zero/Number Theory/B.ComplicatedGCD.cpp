#include <iostream>
#include <string>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    if (a == b) {
        // If a and b are equal, the answer is just the value of a (or b)
        cout << a << endl;
    } else {
        // If a and b are different, the answer is always 1
        cout << 1 << endl;
    }
}

int main() {
    solve();
    return 0;
}
