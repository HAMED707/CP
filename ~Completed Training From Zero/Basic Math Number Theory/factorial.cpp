#include <iostream>

#define MOD 1000000
using namespace std;


// 120
//
//


int main() {
    int n=9;
    int ans=1;
    while (n) {
        ans*=n;
        n--;
       //ans%=5;
    }
    cout<<ans<<" ";


    return 0;
}
