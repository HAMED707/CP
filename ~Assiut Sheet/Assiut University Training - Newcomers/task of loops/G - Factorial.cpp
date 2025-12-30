#include<iostream>
using namespace std;
int main(){   
    
    long long n ,fac=1;
    cin>>n;

    while (n--)
    {
        int c;
        cin>>c;
    for ( int i = 1; i <= c; i++)
    {
        fac *=i;
        
    }
    cout<<fac<<"\n";
    fac=1;
    }
    
    return 0;

}