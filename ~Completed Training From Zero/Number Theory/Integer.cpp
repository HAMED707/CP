#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
// this solution depend on the freq of prime factorial of num and check if it possible to % x ,,,,
//map<int,int>mp;
//
// void fact(int x) {
//
//     for (int i=2;i*i<=x;i++) {  //O(sqrt)
//         while (x%i==0)x/=i,mp[i]++;
//     }
//     if(x>1)mp[x]++;
//
// }
//
// void solve(){
//     int t;cin>>t;
//     while (t--) {
//     mp.clear();
//         int n,q;cin>>n>>q;
//         fact(n);
//         while (q--) {
//             int v,x;cin>>v>>x;
//             if(v==1)fact(x);
//             else {
//                 string ans="Integer\n";
//                 for(auto& [a,b]:mp) {
//                     if(b%x!=0) {
//                         ans="Not integer\n";
//                         break;
//                     }
//
//                 }
//                 cout<<ans;
//             }
//         }
//     }
// }











// this solution depend on the freq of prime factorial of num and check if it possible to % x ,,,,
//+ make checting of prime faster



map<int,int>mp;

vector<int>pf[N];
void sieve() {
    for (int i=2;i<N;i++) { //Nlon(n)
        if(pf[i].empty()) {
            for (int o=i;o<N;o+=i) {
                pf[o].push_back(i);
            }
        }
    }
}
void fact(int x) {
    int n=x;
    for (auto& i:pf[x]) {
        while (n%i==0)n/=i,mp[i]++;
    }


}

void solve(){
    int t;cin>>t;
    sieve();
    while (t--) {
    mp.clear();
        int n,q;cin>>n>>q;
        fact(n);
        while (q--) {
            int v,x;cin>>v>>x;
            if(v==1)fact(x);
            else {
                string ans="Integer\n";
                for(auto& [a,b]:mp) {
                    if(b%x!=0) {
                        ans="Not integer\n";
                        break;
                    }

                }
                cout<<ans;
            }
        }
    }
}

int main (){
       // txt
    HAMED
    solve();
    return 0;
}