#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
bool palindrom(string s) {
    for (char c : s) {
        if (c != s[0]) return 0;
    }
    return 1;
}
void solve(){
    int n;cin>>n;
    while (n--) {
    string s;cin>>s;
        if(palindrom(s))cout<<-1<<endl;
            else cout<<s.size()-1<<endl;

    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}