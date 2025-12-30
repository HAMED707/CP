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
        int a[n];
        for(auto& i:a)cin>>i;

        set<int>st;
        int c=n;
        for(int i=0;i<n;i++) {

            st.insert(a[i]);


                while (st.count(c)) {
                    cout<<c<<' ';
                    st.erase(c);
                    c--;
                }

             cout<<'\n';
        }

    }




int main (){

   //txt
    HAMED
    solve();
    return 0;
}