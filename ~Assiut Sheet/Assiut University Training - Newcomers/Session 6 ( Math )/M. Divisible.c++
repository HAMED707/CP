#include <iostream>
#include <string>


using namespace std;


long long Reminder(string s,long long r){
    long long R=0;
    for (int i = 0; i < s.size(); i++)//0 
    {
        R*=10;
        R+=s[i]-'0';
        R%=r;
    }
    return R;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string num;
    long long r,ans=0;
    cin>>num>>r;
    ans=Reminder(num,r);
    cout<<(ans==0?"YES":"NO");
    
    
    return 0;
}
