#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1000+7;
vector<bool>p(N,1);
    vector<int>v;
void sieve() {
    p[0]=p[1]=0;

    for (int i=2;i*i<=N;i++) {
        if(p[i]==1) {
            for (int j=i*i;j<=N;j+=i) p[j]=0;
        }
    }
}

bool ok(int x) {
    int sum=0,c=0;
    for (int i=0;i<N;i++) {
         if(i>=x)break;
        sum+=v[i];
        c++;
       // cout<<sum<<' '<<c<<'\n';
        if(sum==x-1){ return 1;}
        if(c==2)c=0,sum=0,i--;
    }
    return 0;
}

void solve(){
   int n,k;cin>>n>>k;
    sieve();
    for (int i=2;i<=N;i++) {
        if(p[i])v.push_back(i);
    }

int ans=0;
    for (auto& i:v) {
        if(i>n)break;
        if(ok(i))ans++;
       //    cout<<ans;
        if(ans>=k)return void(cout<<"YES");
    }
    cout<<"NO";

}

int main (){
   //    txt
    HAMED
    solve();
    return 0;
}