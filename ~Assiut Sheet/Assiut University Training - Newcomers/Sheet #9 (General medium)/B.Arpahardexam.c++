    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
    long long n ,ans=1;cin>>n;
    int res=n%4;
    if(n==0){cout<<1;return 0;}
    if(res==0)cout<<6;
   else { while (res--)
        {ans*=8;}
    ans%=10;
    cout<<ans;
   }
    return 0;
    }