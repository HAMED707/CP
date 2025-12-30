//
// Created by h70ab on 9/19/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve() {
    int t;cin>>t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int sum1 = 0, sum2 = 0,ans=0;
        int l = 0, r = n - 1;

        while (l <= r) {
            if (sum1 > sum2) {
                sum2+=a[r];
                r--;
            } else if (sum1 <=sum2) {
                sum1+=a[l];
                l++;
            }
            if(sum1==sum2) {
                 ans=(l)+n-r-1;
            }

        }

        cout << ans << '\n';
    }
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}