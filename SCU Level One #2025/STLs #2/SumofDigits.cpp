#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
  string s;cin>>s;
 int ans=0;

   while (true) {
    if(s.size()==1)break;
    ans++;
    int sum=0;
       for (auto& i:s) {
        sum+=int(i-'0');
       }
   // cout<<sum<<' ';
    s=to_string(sum);
   }
 cout<<ans;
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}