// #include <bits/stdc++.h>
 
// #define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// #define ll long long
// #define ld long double
// #define pl pair<ll, ll>
// #define vi vector<ll>
// #define vii vector<vi>
// #define viii vector<vii>
// #define vc vector<char>
// #define vcc vector<vc>
// #define vp vector<pl>
// #define vpp vector<vp>
// #define vppp vector<vpp>
// #define mi map<ll,ll>
// #define unmi unordered_map<ll, ll>
// #define mc map<char,int>
// #define sortx(X) sort(X.begin(),X.end());
// #define all(X) X.begin(),X.end()
// #define ln '\n'
// #define YES {cout << "YES\n"; return;}
// #define NO {cout << "NO\n"; return;}
// #define fi first
// #define se second
// #define sz(x) int(x.size())
// #define fixed(n) fixed << setprecision(n)
// #define dl <<"\n"
// #define fr for(int i = 0; i < n; i++)
// #define frs for(int i = 0; i < s.size(); i++)
// #define fr1n for(int i = 1; i <= n; i++)
// #define fr1 for(int i = 1; i < n; i++)
//  using namespace std;


//  void solve(){
//    string s;
//     int size;
//     cin>>s>>size;
//     int lettNum=0,symbol=0,astr;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i]!='*' and s[i]!='?')lettNum++;
//         else symbol++;
//         if(s[i]=='*')astr++;
//     }

//     if(lettNum==size){
//         for (int i = 0; i < s.size(); i++)
//         {
//             if(s[i]!='*' and s[i]!='?'){
//                 cout<<s[i];
//             }
//         }
        
//     }
//     else if(lettNum>size){
//         int wanted=lettNum-size;
//         if(wanted<=symbol){
            
//             for (int i = 0; i < s.size() and wanted>0; i++)
//             {
//                 if(s[i]=='*' or s[i]=='?'){
//                     s.erase(s.begin()+i-1);
//                     i--;
//                    wanted--;
//                 }
//                 }
                
//                     for (int i = 0; i < s.size(); i++)
//                     {
//                         if(s[i]!='*' and s[i]!='?'){
//                             cout<<s[i];
//                         }
//                     }
                    
                
            
//         }
//         else cout<<"Impossible";
//     }
//         /*///*/
//    else{
//         int wanted=size-lettNum;
//         if(astr>0){
//             ////
//             for (int i = 0; i < s.size() ; i++)
//             {
//                  if(s[i]=='*'){                                          
//                     s.insert(i, string(wanted, s[i - 1]));

//                     break;
//                  }
//             }
//             for (int i = 0; i < s.size(); i++)
//             {
//                 if(s[i]!='*' and s[i]!='?'){
//                     cout<<s[i];
//                 }
//             }
            
//             ////
//         }else cout<<"Impossible";

//    }
   
//  }
 
//  int main (){
//     HAMED
//     solve();
//     return 0;
//  }
#include <bits/stdc++.h>
 
#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
using namespace std;
 
void solve() {
    string s;
    int k;
    cin >> s >> k;
    
    int n = s.size();
    int lettNum = 0, symbol = 0, astr = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '*' && s[i] != '?') lettNum++;
        else symbol++;
        if (s[i] == '*') astr++;
    }
 
    if (lettNum > k) {
        int wanted = lettNum - k;
        if (wanted > symbol) {
            cout << "Impossible";
            return;
        }
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '?' || s[i] == '*') {
                if (wanted > 0) {
                    result.pop_back();  // Remove the preceding character
                    wanted--;
                }
            } else {
                result += s[i];
            }
        }
        cout << result;
    } else if (lettNum < k) {
        int needed = k - lettNum;
        if (astr == 0) {
            cout << "Impossible";
            return;
        }
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                result += string(needed, s[i - 1]);
                needed = 0;
            } else if (s[i] != '?') {
                result += s[i];
            }
        }
        cout << result;
    } else {
        for (int i = 0; i < n; i++) {
            if (s[i] != '*' && s[i] != '?') {
                cout << s[i];
            }
        }
    }
}
 
int main() {
    HAMED
    solve();
    return 0;
}