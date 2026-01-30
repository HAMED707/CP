#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'transformString' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int transformString(string s) {
    int changes = 0;
    int n = s.length();
    
    // Compare characters from both ends
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            changes++;
        }
    }
    
    return changes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = transformString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
