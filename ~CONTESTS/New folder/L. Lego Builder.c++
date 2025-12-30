#include <iostream>
#include <algorithm>
using namespace std;

int freq[10001] = {0};

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int longest = 0;
    int current_length = 0;


    for (int i = 1; i < 10000; i++) { 
        if (freq[i] > 0 && freq[i + 1] > freq[i]) {
            current_length++;
        } else {
            longest = max(longest, current_length + (freq[i] > 0 ? 1 : 0));
            current_length = 0;
        }
    }

   

    cout << longest << endl;

    return 0;
}