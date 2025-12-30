#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int mx=max(a.size(),b.size());
    if(a==b)cout<<-1;
    else cout<<mx;  
   return 0;
}