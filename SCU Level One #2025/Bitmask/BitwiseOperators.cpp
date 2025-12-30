#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int n,k;cin>>n>>k;
    int  mxA=0,mxO=0,mxX=0;
    for (int i=1;i<n;i++) {

        for (int j=i+1;j<=n;j++) {
            int a=i&j,b=i|j,c=i^j;
            if(mxA < a  and a<k )mxA=a;
            if(mxO < b  and b<k )mxO=b;
            if(mxX < c  and c<k )mxX=c;
        }
    }
    cout<<mxA<<'\n'<<mxO<<'\n'<<mxX;
}

int main (){

    // txt
   HAMED
   solve();
    return 0;
}