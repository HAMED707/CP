#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
  int n;cin>>n;
    deque<int>dq(n);
    for (auto& i:dq)cin>>i;
    int s=0,d=0;
    for (int i=1;i<=n;i++) {
        if(i%2!=0){

            if(dq.front()>dq.back()) {
                s+=dq.front();
                dq.pop_front();
            }
            else if(dq.front()<=dq.back()) {
                s+=dq.back();
                dq.pop_back();
            }
        }
        else{
            if(dq.front()>dq.back()) {
                d+=dq.front();
                dq.pop_front();
            }
            else if(dq.front()<=dq.back()) {
                d+=dq.back();
                dq.pop_back();
            }
        }

    }
    cout<<s<<" "<<d;
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}