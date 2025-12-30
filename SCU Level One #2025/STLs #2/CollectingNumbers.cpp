#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

// void solve(){
//    int n;cin>>n;
//     deque<int>v(n);
//     for (auto& i:v)cin>>i;
//     int c=0,cnt=0;
//
//     int mx=n;
//    while (n){
//     cnt++;
//        c=0;
//        deque<int> temp;
//         for(int i=v.size()-1;i>=0;i--) {
//             if(mx==v[i]) {
//                 mx=v[i];
//                 mx--;
//                 c++;
//             }
//             else temp.push_front(v[i]);
//         }
//
//         v=temp;
//
//        n-=c;
//     }cout<<cnt;
//
// }

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) cin >> i;

    int cnt = 0;
    while (!v.empty()) {
        int mx = v.size();  // Start with the maximum value we need in this pass
        cnt++;
        vector<int> temp;

        // Go through the vector to find the longest decreasing subsequence
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] == mx) {
                mx--;  // Only decrease mx if we find the expected element
            } else {
                temp.push_back(v[i]);  // Collect remaining elements for the next round
            }
        }

        // Update v with the remaining elements in reverse order
        v.assign(temp.rbegin(), temp.rend());
    }

    cout << cnt << endl;
}


int main (){
     //txt
    HAMED
    solve();
    return 0;
}