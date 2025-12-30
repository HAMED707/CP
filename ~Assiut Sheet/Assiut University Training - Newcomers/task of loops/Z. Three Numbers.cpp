#include<iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){   
    int k,y,c=0;
    cin>>k>>y;
    
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if(y-i-j>=0 && y-i-j<=k)c++;
        }
        
    }
    cout<<c;
    
    return 0; 
    
}