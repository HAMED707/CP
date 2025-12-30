#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

int GCD(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int LCM(int a, int b) {
    return (a / GCD(a, b)) * b;
}


void solve(){
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];    
    
    vector<int> lcms;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            lcms.push_back(GCD(a[i], a[j]));
            cout<<lcms.back()<<" "; // Debugging output
        }
    }

   int g=0;
    for(int i=0;i<lcms.size();i++){
        g = GCD(g, lcms[i]);
    }

    cout<<g<<"\n";
}


int main (){

    txt
    HAMED
    solve();
    return 0;
}