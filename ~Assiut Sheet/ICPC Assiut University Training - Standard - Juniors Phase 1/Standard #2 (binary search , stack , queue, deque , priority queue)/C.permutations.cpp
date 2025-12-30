#include <algorithm>
#include <iostream>
#define all(X) X.begin(),X.end()

using namespace std;
int main() {
    int n,q;cin>>n>>q;
    string s;cin>>s;
    while (q--) {
        string a;cin>>a;
        int x;
        if(a=="prev_permutation") {
            cin>>x;
            while (x--) prev_permutation(all(s));
            for(auto& i:s)cout<<i;
            cout<<'\n';
        }
        else {
            cin>>x;
            while (x--) next_permutation(all(s));
            for(auto& i:s)cout<<i;
            cout<<'\n';
        }
    }
    // next_permutation(all(s));
    // for(auto& i:s)cout<<i;

    return 0;
}
