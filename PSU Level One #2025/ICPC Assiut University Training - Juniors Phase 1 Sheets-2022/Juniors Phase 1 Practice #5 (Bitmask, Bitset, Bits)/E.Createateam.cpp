#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n,vector<int>(n));

    for (int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>v[i][j];

    vector<int>res;
    for (int mask=0;mask< 1<<n;mask++) {
        vector<int>tmp;
        for (int i=0;i<n;i++) {

            if(mask & (1<<i))tmp.push_back(i);
        }
        bool flag=1;

        for (int i=0;i<tmp.size();i++)
        for (int j=0;j<tmp.size();j++) {
            if(v[tmp[i]][tmp[j]]==0) {
                flag=0;break;
            }
        }

        if(flag) {
            if(res.size()<tmp.size())res=tmp;
        }
    }
    cout<<res.size()<<'\n';
    for (auto i:res)cout<< i+1<<' ';


}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}