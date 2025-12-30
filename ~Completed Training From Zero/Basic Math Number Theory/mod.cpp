#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000
using namespace std;


//1234567%100
// 0*10 +1 1
// 1*10+2 12


int main() {
        string s;cin>>s;
    int t=0;
        for (auto& i :s) {
            t*=10;
            t+=int(i-'0');
            if(t>=100)t%=100;
        }
    cout<<t;


    return 0;
}
