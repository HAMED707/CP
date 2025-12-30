#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e9+5;
vector<int>freq(N);
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

 vector<int>v;
    int ans=0;
    for(int i=0;i<m;i++)freq[b[i]]++;

    for(int j=0,i=0;j<m;j++) {
        while(i<n and a[i]==b[j])i++,ans++;
        //cout<<freq[b[j]]<<" "<<b[j]<<"\n";
       v.push_back(ans);
    }
    freq.erase(unique(freq.begin(),freq.end()),freq.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    vector<int>res;
    for(auto& i:freq){
    if(i>0)res.push_back(i);
    }
    for(auto& i:res)cout<<i<<" ";

        int c=0;
    for(int i=v.size()-1;i>0;i--)v[i]-=v[i-1];

   // v.reserve(v.begin(),v.end();

    for(int i=0;i<res.size();i++) {
        c+=(res[i]*v[res.size()-i-1]);
    }
    //cout<<c;


     //for(auto& i:res)cout<<i<<" ";
    //cout<<ans;
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}