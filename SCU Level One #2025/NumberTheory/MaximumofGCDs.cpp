
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end() 

const ll N=1e3;
const int MOD = 1e9+7;

int GCD(int a,int b){
    
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}


void solve() {
    int n;cin>>n;
    
    vector<pair<int,bool>>a(n);for(auto& i:a)
                                    cin>>i.first,i.second=false;

    

    int g=0,cnt=0;
    for(;cnt<n;cnt++){
        
        pair<int,int> mx={0,0};
        for(int i=0;i<n;i++){
            if(!a[i].second)
                mx=max(  mx  , { GCD(a[i].first,g) , i } );
            
            //cout<<mx.first<<' '<<mx.second<<' ';
            }
            g=mx.first;
            a[mx.second].second=true;
            
            //cout<<'\n'<<g<<'\n';

            cout<<g<<' ';
            // cout << a[mx.second].first << ' ';


            // for(auto [x,y]:a)   
            //     cout<<x<<' '<<y<<' ';
            // cout << "\n\n";
    }
    cout<<endl;
    
}

int main (){
// txt
HAMED
int t;cin>>t;
while(t--)solve();
return 0;
}