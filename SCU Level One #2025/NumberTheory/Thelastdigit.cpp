
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
void solve() {
int bas,a;cin>>bas>>a;
if (bas>9)bas=bas%10;
if (bas==0 || bas==1  ) {return void(cout<<bas<<'\n');}
if (a==0)return void(cout<<1<<endl);
vector<vector<int>> v(10);
for (int i=2;i<=9;i++)v[i]={(i*i*i*i)%10,(i)%10,(i*i)%10,(i*i*i)%10};
cout<<v[bas][a%4]<<'\n';
}
int main (){
// txt
HAMED
int t;cin>>t;
while(t--)
solve();
return 0;
}