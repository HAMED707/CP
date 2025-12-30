#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve() {
   int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>arr;
    for (int i=1;i<=n;i++)cin>>a[i];
    vector<int>b;
    b=a;
    sort(all(b));
    //for (auto& i:b)cout<<i<<' ';
    //cout<<'\n';
   map<int,int>mp;

    for (int i=1;i<=n;i++) {
       mp[b[i]]=i;
    }
   // for (auto& [x,y]:mp)cout<<x<<' '<<y<<'\n';

    int ans=0;


    for (int i=1;i<=n;i++) {
        if(mp[a[i]]!=i) {
            ans++;
            arr.push_back(i);
        }
    }
        if(ans>2)return void(cout<<"no");
    if(ans==0)return void(cout<<"yes\n"<<1<<' '<<1);
    cout<<"yes\n";
    cout<<arr[0]<<' '<<arr[1];

}


int main (){

  //  txt
    HAMED
   solve();
    return 0;
}