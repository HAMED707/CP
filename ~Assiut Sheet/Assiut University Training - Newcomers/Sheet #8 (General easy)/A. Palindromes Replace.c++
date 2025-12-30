
//a?a
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(string s){
    int sz=s.size();
    
    for (int i = 0; i < sz  ; ++i) {
        if (s[i] == '?' && s[sz - i - 1] == '?') {
            s[i] = s[sz - i - 1] = 'a'; 
        } else if (s[i] == '?'&&s[sz - i - 1]!= '?') {
            s[i] = s[sz - i - 1]; 
        } else if (s[sz - i - 1] == '?'&&s[i] !='?') {
            s[sz - i - 1] = s[i]; 
        }
    }
   
    if (sz%2!=0)
    {
        if(s[sz/2+1]=='?')s[sz/2+1]='a';
    }
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    for (int i = 0; i < sz; i++)
    {
        if(s[i]!=tmp[i]){
            cout<<-1;
            return;
        }
    }
    for(auto& c:s)cout<<c;
}


int main() {
    string s;cin>>s;
    solve(s);

    return 0;
}