#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long 

int main(){
    ll cnt,ice,dist=0;
    cin>>cnt>>ice;
    while (cnt--)
    {
        char oper;
        ll numice;
        cin>>oper>>numice;
        if(oper=='+')ice+=numice;
        if(oper=='-'){
            if(numice>ice)dist++;
            else ice-=numice;
        }
    }
    cout<<ice<<" "<<dist;
    
   return 0;
}