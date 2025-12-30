#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve(){
string s;cin>>s;
    int n=0;
    for(auto& i:s) {
        n*=10;
        n+=int(i-'0');
        n%=4;
    }
    //based on the observation of how these powers behave when taken modulo 5. Each of
    //// these numbers generates a cycle that repeats after a certain number of iterations
    int pow2[]={1,2,4,3};//2^1%5=2 2^2%5=4 2^3%5=3
    int pow3[]={1,3,4,2};
    int pow4[]={1,4};

    int sum =1;
    sum+=pow2[n]+pow3[n]+pow4[n%2];

    cout<<sum%5;



}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}