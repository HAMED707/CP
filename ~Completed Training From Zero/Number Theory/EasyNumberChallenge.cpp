#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
int d(int x) {
    int c=0;
    for (int i=1;i*i<=x;i++) {
        if(x%i==0) {

        if(i==x/i) c++;
        else c+=2;

        }
    }
    return c;
}
void solve(){

    int a,b,c;cin>>a>>b>>c;
    int ans=0;

    vector<int> divisors((a*b*c) + 1, 0);

    for (int i = 1; i <= a*b*c; ++i) {
        for (int j = i; j <= a*b*c; j += i) {
            divisors[j]++;
        }
    }
    for (int i=1;i<=a;i++)
        for (int j=1;j<=b;j++)
            for (int k=1;k<=c;k++) {
                ans+=divisors[i*j*k];
            }
    cout<<ans%1073741824;

}

int main (){
     // txt
    HAMED
    solve();
    return 0;
}