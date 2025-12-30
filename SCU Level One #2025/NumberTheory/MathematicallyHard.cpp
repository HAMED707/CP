#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
int eulerTotient(int n)
{
    int res=n;
    for(int i=2;i*i<=n;i++)
        if (n%i==0)
        {
            while (n%i==0)
                n/=i;
            res-=res/i;
        }
    if (n > 1)
        res -= res / n;
    return res;
}
int c=1;
void basicIO() {
    int a, b,ans=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        int res=eulerTotient(i);
        ans+=res*res;
    }
    cout<<"Case "<<c++<<": "<<ans<<'\n';
}

int main() {
    int t;cin>>t;
    while(t--)
        basicIO();
    // Your cpp code here
    return 0;
}
