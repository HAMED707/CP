#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve(){
    int n;cin>>n;
    int x,a=0,b=0;
    for(int i=0;i<n;i++) {
        cin>>x;
        x==1?a++:b++;
    }
    if(a==0 or b==0) {
        while (a--)cout<<1<<" ";
        while (b--)cout<<2<<" ";
        return;
    }

        cout<<2<<" "<<1<<" ";
    a--,b--;
    while (b--)cout<<2<<" ";
    while (a--)cout<<1<<" ";

}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}