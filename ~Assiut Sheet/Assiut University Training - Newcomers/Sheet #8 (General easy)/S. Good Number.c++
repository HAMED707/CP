#include<iostream>
#include<vector>
using namespace std;
int main(){
    int cnt,K,time=0,ans=0;
    cin>>cnt>>K;
    while (cnt--)
    {
        string s;
        cin >> s;
        for (int i = 0; i <= K; i++)
        {
            if(s.find(i + '0') != string::npos){time++;}
            //cout<<time<<"  ";
        }
        if(time-1==K)ans++;
        time=0;
    }
    cout<<ans;  
    
    
   return 0;
}