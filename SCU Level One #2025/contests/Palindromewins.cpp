#include <bits/stdc++.h>



#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;
bool ispalindrom(string s) {
    int n=s.size();
    for (int i=0;i<n;i++) {
        if(s[i]!=s[n-i-1])return false;
    }
    return true;
}

void solve() {
    string s;cin>>s;

    vector<int> freq(26, 0);

    for (char c : s)freq[c - 'a']++;

    int odd= 0;
    for (int i=0;i<26;i++)
        if (freq[i]%2==1)
            odd++;

    cout<<(odd%2==1 or odd==0?"First":"Second");
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}