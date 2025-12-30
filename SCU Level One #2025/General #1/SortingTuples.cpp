#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1000+5;

bool opr(pair< ll, pair< pair<ll,char>,pair<ll,string> > > a,pair< ll, pair< pair<ll,char>,pair<ll,string> > > b) {

    pair< pair<ll,char>,pair<ll,string> >res1=a.second;
    pair< pair<ll,char>,pair<ll,string> >res2=b.second;

    pair<ll,char>wt1=res1.first;
    pair<ll,string>dn1=res1.second;

    pair<ll,char>wt2=res2.first;
    pair<ll,string>dn2=res2.second;


    if(a.first<b.first)return 1;
    if(a.first==b.first) {
        if(wt1.first<wt2.first)return 1;

        if(wt1.first==wt2.first) {
            if(wt1.second<wt2.second)return 1;

            if(wt1.second==wt2.second) {
                if(dn1.first<dn2.first)return 1;

                if(dn1.first==dn2.first){
                    if(dn1.second<dn2.second)return 1;
                }


            }
        }
    }

    return false;
}

void solve(){
    int q;cin>>q;
  vector< pair< ll, pair< pair<ll,char>,pair<ll,string> > > > mp(q);
    for (int i=0;i<q;i++) {
        ll val,w,d;char t;string n;

        cin>>val>>w>>t>>d>>n;

        pair<ll,char>wt={w,t};
        pair<ll,string>dn={d,n};
        pair< pair<ll,char>,pair<ll,string> >res={wt,dn};

        mp[i]={val,res};
    }
    sort(all(mp),opr);
    for (auto& [x,y]: mp) {
        cout<<x<<" ";
        pair< pair<ll,char>,pair<ll,string> >res=y;
        cout<<y.first.first<<" "<<y.first.second<<" "<<y.second.first<<" "<<y.second.second<<'\n';
    }

}

int main (){
    txt
    HAMED
    solve();
    return 0;
}