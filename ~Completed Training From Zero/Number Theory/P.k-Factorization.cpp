#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve(){
    int n,k;cin>>n>>k;
    vector<int>v;

    for (int i=2;i*i<=n;i++) {

        while (n%i==0 )v.push_back(i),n/=i;
    }
    if(n>1)v.push_back(n);
   if(v.size()<k) {cout<<-1;return;}
    if (v.size() == k) {
        for (auto &i : v) {
            cout << i << " ";
        }
        return;
    }


    while (v.size() > k) {
        int last = v.back();
        v.pop_back();
        v.back() *= last;
    }

    for (auto &i : v) {
        cout << i << " ";
    }
}




int main (){
    //txt
    HAMED
    solve();
    return 0;
}