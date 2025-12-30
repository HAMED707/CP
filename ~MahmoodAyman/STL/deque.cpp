#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
 using namespace std;
const int N=1e5+5;

void solve(){

//
    array<int,5>arr={1,2,3,4,5};
    for(auto& i:arr)cout<<i<<" ";

//
    deque<int>d={4,4,4,1,1,1,6,6,10,17,5,6,7};

  //  d.pop_front();//O(1)
   // d.push_front(1);//O(1)
    //d.erase(d.begin()+1);//O(N)

    sort(all(d));
    d.erase(unique(all(d)),d.end());

    for(auto& i:d)cout<<i<<" ";


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}