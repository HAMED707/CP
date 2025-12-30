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
int MonthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
bool isPreviosDay(int d1,int m1,int y1,int d2,int m2,int y2){
    if(--d2==0){
        if(--m2==0){
            y2--;
            m2=12;
        }
    }
    bool isLeap=(y2%4==0&&( y2%100==0 || y2%400==0));
    if(m2==2 && isLeap)d2=29;

    return y1==y2 and m1==m2 and d1 ==d2;
}
 void solve(){
    int n;
    int d1=0,m1=0,y1=0,c1=0;
    while (cin>>n,n)
    {   int count=0,sum=0;
        int d2,m2,y2,c2;
        while (n--)
        {
            cin>>d2>>m2>>y2>>c2;
            if(isPreviosDay(d1,m1,y1,d2,m2,y2)){
                sum+=c2-c1;count++;
            }
            d1=d2,m1=m2,y1=y2,c1=c2;
        }
        cout<<count<<" "<<sum dl;
    }
    
   
   
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }