#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    int n,m;cin>>n>>m;
    int sum = n+m;
    string a,b;
    a=to_string(n);
    b=to_string(m);
    string s="";
    for (auto&i:a)if(i!='0')s+=i;
    a=s;s="";
    for (auto&i:b)if(i!='0')s+=i;
    b=s,s=""; string su=to_string(sum);
    for (auto&i:su)if(i!='0')s+=i;
    su=s;
    sum=stoi(su);
    n=stoi(a),m=stoi(b);
    //cout<<su<<sum;
   if(sum==n+m)cout<<"YES";
   else cout<<"NO";

}


int main (){

     //txt
    HAMED
    solve();
    return 0;
}