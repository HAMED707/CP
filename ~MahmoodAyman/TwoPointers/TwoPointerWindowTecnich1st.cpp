#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n,k,x;cin>>n>>k>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int sum=0;
    int l=0,r=0;
    while (r-l+1<k) {
        sum+=a[r++];
    }
    bool ok=0;
    while (r<n) {
        sum+=a[r];


        if(sum==x)return void(cout<<"RESULT :"<<x);

        sum-=a[l++];
        r++;
    }
cout<<"NO";

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}