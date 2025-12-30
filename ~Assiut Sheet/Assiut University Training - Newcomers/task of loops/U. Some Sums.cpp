#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    
    long long a,b,c,sum=0;
    cin>>a>>b>>c;
    // long long z=0;
    for (int i = 1; i <= a; i++)
    {
        long long s=0;
        int x=i;
        while (x>0)
        {
            s+=x%10;
            
            x=x/10;
        }
        if (s>=b && s<=c)
        {
            sum+=i;
        }
        

    }
    
    cout<<sum;
    return 0; 
    
}