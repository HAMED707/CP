#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int x;cin>>x;
    vector<int>a(x-1);
    for (int i=1;i<x;i++)cin>>a[i];
    a[0]=a[x]=0;
    vector<int>b(x);

    for (int i=1;i<=x;i++) {
        b[i]=a[i-1]|a[i];
    }

    for (int i=1;i<x;i++) {
        if((b[i] & b[i+1])!=a[i])return void(cout<<-1<<'\n');
    }

    for(int i=1;i<=x;i++)cout<<b[i]<<' ';
    cout<<'\n';

}

int main (){

    txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}