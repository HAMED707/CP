//
// Created by h70ab on 9/1/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define vii vector<vi>
#define viii vector<vii>
#define vc vector<char>
#define vcc vector<vc>
#define vp vector<pl>
#define vpp vector<vp>
#define vppp vector<vpp>
#define mi map<ll,ll>
#define unmi unordered_map<ll, ll>
#define mc map<char,int>
#define sortx(X) sort(X.begin(),X.end());
#define all(X) X.begin(),X.end()
#define ln '\n'
#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}
#define fi first
#define se second
#define sz(x) int(x.size())
#define fixed(n) fixed << setprecision(n)
#define dl <<"\n"
#define fr for(int i = 0; i < n; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
const int N=18;
   int n;
    vector<int>nums;

bool rec(int i=0,int sum=0) {
    //basecase
     if(i==nums.size())return (sum==0);

    //transtions
    if(rec(i+1,sum+nums[i]) )return true;
    if(rec(i+1,sum-nums[i]) )return true;
    return false;
}
void solve(){
    cin>>n;
    while (n--) {
        int _1,_2;
        cin>>_1>>_2;
        for (int i=0;i<_1;i++)nums.push_back(1);
        for (int i=0;i<_2;i++)nums.push_back(2);


    cout<<(rec()?"YES":"NO") dl;
        nums.erase(nums.begin(),nums.end());
    }



}

int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}