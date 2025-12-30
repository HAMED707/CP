
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6+5;


// ll divisors(int n)
// {
//     ll sum=0;
//     for(int i=2;i*i<=n;i++)
//     {
//         if (n%i==0)
//         {
//             sum+=i;
//
//             if(n/i!=i )sum+=(n/i);
//         }
//     }return sum+1;
// }
int sum[N];
void sieveDivisors()
{
    for(int i=1;i<=1000000;i++)
        for(int j=i+i;j<=1000000;j+=i)
            sum[j]+=i;
}
void solve() {

    int n;cin>>n;
    if (n==1)return void(cout<<"deficient"<<endl);
    if (sum[n]==n) cout<<"perfect"<<endl;
    else if (sum[n]>n) cout<<"abundant"<<endl;
    else cout<<"deficient"<<endl;
}



int main (){

     //txt
    HAMED
    int t;cin>>t;
    sieveDivisors();
    while (t--)
        solve();
    return 0;
}