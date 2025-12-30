#include<iostream>
using namespace std;
int main(){   
    int n ,n_r=0;
    cin>>n;
    int x=n;
    while (n>0)
    {        
        n_r=n_r*10;
        n_r+=n%10;
        n=n/10;
    }
    cout<<n_r<<"\n";
    if (n_r==x)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    
    return 0;

}