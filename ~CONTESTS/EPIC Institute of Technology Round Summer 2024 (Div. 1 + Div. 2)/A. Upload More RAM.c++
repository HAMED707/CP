
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,sec;
        cin >> n>>sec;  
        int tmp=sec-1;
        cout<<n*sec-tmp<<endl;
        }

       

    return 0;
}
