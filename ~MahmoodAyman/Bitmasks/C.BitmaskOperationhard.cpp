#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()




using namespace std;
const int N=1e5+5;

bool know(int i,int n) {
    return (n>>i)&1;
}
ll To1(int i,int n) {
    return n|(1<<i);
}
ll To0(int i,int n) {
    return n&(-1^(1<<i));
}
ll To1_0(int i,int n) {
    return n^(1<<i);
}
bool pow2(int n) {
    return n>0 and (n&(n-1))==0;
}
void solve(){
    int q,n;
    cin>>n>>q;
    while (q--) {
        int x;cin>>x;
        if(x==1) {
           for(int i=0;i<32;i++) {
               if(know(i,n)==0) {
                   n=To1(i,n);
                   break;
               }
           }
        }
        else if(x==2) {
            for(int i=0;i<32;i++) {
                if(know(i,n)==1) {
                    n=To0(i,n);
                    break;
                }
            }
        }
        else if(x==3) {
            for(int i=0;i<32;i++) {
                if(know(i,n)==1) {
                    break;
                }
                    n=To1(i,n);
            }
        }
        else if(x==4){
            for(int i=0;i<32;i++) {
                if(know(i,n)==0) {
                    break;
                }
                    n=To0(i,n);
            }
        }else cout<<((pow2(n)==1)?"is power of two\n":"not power of two\n");
        if(x<5)cout<<n<<'\n';

    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}