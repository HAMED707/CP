
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=1e5+5;

void solve(){
    int t;cin>>t;
    map<int,int>freq;
    multiset<int>value;
    while (t--) {
        int q,x;cin>>q>>x;
        if(q==1) {
            if (freq[x] > 0) {
                value.erase(value.find(freq[x]));
            }
            freq[x]++;
            value.insert(freq[x]);
        }
        else if(q==2) {
            if(freq[x]>0) {
                value.erase(value.find(freq[x]));
                freq[x]--;
                if (freq[x] > 0) {
                    value.insert(freq[x]);
                }
                else {
                    freq.erase(x);
                }
            }
        }
        else if(q==3) {
            if(value.find(x)!=value.end())cout<<"1\n";
            else cout<<"0\n";
        }

    }
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}