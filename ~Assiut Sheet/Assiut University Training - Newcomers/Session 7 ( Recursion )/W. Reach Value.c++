#include <iostream>
using namespace std;
typedef long long ll;
bool re(ll value,ll x){
    if(value==x)return 1;
    if(value>x)return 0;
    return re(value*10,x)||re(value*20,x); 
}

int main() {
    int cnt ;
    cin>>cnt;
    while (cnt--)
    {
        ll x;
        cin>>x;
        cout<<(re(1,x)?"YES":"NO")<<endl;
    }
    

    return 0;
}
