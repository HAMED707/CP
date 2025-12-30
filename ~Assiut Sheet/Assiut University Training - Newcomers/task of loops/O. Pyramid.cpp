#include<iostream>
using namespace std;
int main(){   
    int n ,x ;
    cin>>n;
    for ( int i = 1; i<=n; i++)
    {
    for (int g = n; g >= i; g--)
    {
        cout<<"*";
    }
    cout<<"\n";
    }
    
    return 0;

}
