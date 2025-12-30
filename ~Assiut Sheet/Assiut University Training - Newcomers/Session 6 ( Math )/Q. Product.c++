#include <iostream>


using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long l,r,m,res=1;
    cin>>l>>r>>m;
    for (long long i = l; i <= r; i++)
    {
        res*=i%m;
        res%=m;
    }
    
    cout<<res;
    
    return 0;
}
