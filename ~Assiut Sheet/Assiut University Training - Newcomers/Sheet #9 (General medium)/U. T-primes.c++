    #include<iostream>
    #include<algorithm>
    #include<cmath>
    typedef long long ll;

    #define HAMED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define testCases int t; cin >> t; while (t--)
    using namespace std;
    bool isprime(int n){
        if(n==0||n==1)return 0;
        if(n==2)return 1;
        if(n%2==0)return 0;
            for (int i = 3; i*i<= n; i+=2){
            if(n%i==0)return 0;
            }
            return 1;
            }
    void solve(){
        ll x;cin>>x;
        cout<< ((sqrt(x) - (int)sqrt(x)) == 0 && isprime(sqrt(x))?"YES\n":"NO\n");
        
    }
    int main()
    { 
        HAMED;
    
        testCases
        solve();

        return 0;
    }


