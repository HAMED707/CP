#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void solve(int n,int t){
   int  t_sz=log10(t)+1;
    if(t_sz>n){cout<<-1;return;}
    if(t==10){
        cout<<1;
        int cnt=n-1;
        while(cnt--){
            cout<<0;
        }
    }
    else {while(n--){
        cout<<t;
    }}
    
}
int main()
{
   int n,t;cin>>n>>t;
   solve(n,t);
   
    return 0;
}
