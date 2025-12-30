#include <algorithm>
#include <iostream>
#define all(X) X.begin(),X.end()

using namespace std;
int main() {
    int q;cin>>q;
    while (q--) {

        int n;cin>>n;
       if(n==1) {
           cout<<1<<'\n';
           continue;
       }
        if(n%2!=0) {
            cout<<-1<<'\n';
            continue;
        }
        for (int i=1;i<n;i+=2) {
            cout<<i+1<<" "<<i<<' ';
        }cout<<'\n';

    }


    return 0;
}
