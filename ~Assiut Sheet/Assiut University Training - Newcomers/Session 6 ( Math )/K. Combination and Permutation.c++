
#include<iostream>

using namespace std;
long long nPr(long long n,long long r){
    long long ans=1;
    for (int i = 0; i < r; i++)
    {
        ans*=(n-i);
    }
    return ans;    
}

long long nCr(long long n,long long r){
    
    if(r>n-r)r=n-r;
    if(r>n)return 0ll;
    long long ans=1;
    for (int i = 0; i < r; i++)
    {
        ans*=(n-i);
        ans/=i+1;
    }
    return ans;    
}
int main(){
    long long n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<" ";
    cout<<nPr(n,r);




return 0;
}                                               