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


//  void solve(){
//    int r1,r2,c1,c2,d1,d2;
//    cin>>r1>>r2>>c1>>c2>>d1>>d2;

//    for (int i = 1; i <= 9; i++)
//         for (int j = 1; j <= 9; j++)
//             for (int z = 1; z <= 9; z++)
//                 for (int k = 1; k <= 9; k++){
//                     if(i != j && i != z && i != k && j!=z && j!=k && z!=k ){
//                         if(i+j==r1&&i+z==c1&&i+k==d1 && z+k==r2&&z+j==d2&&j+k==c2){
//                             cout<<i<<" "<<j dl<<z<<" "<<k;return;
//                         }
//                     }
                     
//                 }
//                 cout<<-1;
   
   
   
//  }
void solve(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
   
    while (true)
    {
    int i=rand()%10;
    int j=rand()%10;
    int z=rand()%10;
    int k=rand()%10;
    if(i!=0&&j!=0&&z!=0&&k!=0){
     if(i != j && i != z && i != k && j!=z && j!=k && z!=k ){
            if(i+j==r1&&i+z==c1&&i+k==d1 && z+k==r2&&z+j==d2&&j+k==c2){
                    cout<<i<<" "<<j dl<<z<<" "<<k;return;
                        }
                    }}
    }
}
 
 int main (){
    HAMED
    solve();
    return 0;
 }