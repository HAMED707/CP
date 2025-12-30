#include <iostream>
#include <math.h>
#include <map>
#define ll long long

using namespace std;

void solve()
{
    int n=30;

    for(int i=2;i<=n;i++)
    {   cout<<i<<" :::";
        for(int j=2;j<=5;j++)
        {
            int ans=pow(i,j);
            cout<<ans%10<<" ";
        }
        cout<<endl;
    }
}
int main() {

    solve();
    return 0;
}