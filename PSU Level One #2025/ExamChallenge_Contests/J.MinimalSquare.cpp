#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    int a, b;
    cin >> a >> b;

    int side1 = max(a + a, b);//6,2 //6
    int side2 = max(a, b + b);//3,4 //4
    int side3 = max(a + b, a);//5,3 //5
    int side4 = max(a, a + b);//3,5 //5

    int ans = min({side1, side2, side3, side4});
    cout << ans * ans << endl;
}



int main (){

   //  txt
    HAMED
    int n;cin>>n;
    while (n--)solve();
    return 0;
}