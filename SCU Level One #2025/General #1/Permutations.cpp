#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
   int n;cin>>n;
    int a[n];
    if(n==1)return void(cout<<1);
    if(n<4)return void(cout<<"NO SOLUTION"<<'\n');
    for(int i=0;i<n;i++)a[i]=i+1;

    int ans[n];
    int len=n;
    if(n%2!=0)len=n-1;
    for(int i=1;i<=len;i+=2) {
        ans[i-1]=i+1;
        ans[i]=i;
        //cout<<i+1<<' '<<i<<'\n';
    }
    if(n%2!=0)ans[n-1]=n;

    for(int i=1;i<n-1;i+=2) {
       swap(ans[i],ans[i+1]);
    }

    for(auto& i:ans)cout<<i<<' ';

}


int main (){
    //txt
    HAMED
    //int t;cin>>t;
   // while (t--)
   solve();
    return 0;
}