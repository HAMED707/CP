
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end() 

const ll N=1e3;
const int MOD = 1e9+7;



void solve() {
    int n,k;cin>>n>>k;
    vector<int>ans;
    if (k==1)return void(cout<<n);
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){

            while(n%i==0 && k>1){
                n/=i;
                ans.push_back(i);
                k--;
                // cout<<"k : "<<k<<" n:"<<n<<'\n';
            }
        }

        if(k==1 && n!=1){ans.push_back(n),k--;break;}    
    }
    if(k)return void(cout<<"-1");
    for(auto i:ans)cout<<i<<' ';
}

int main (){
//  txt
HAMED
solve();
return 0;
}