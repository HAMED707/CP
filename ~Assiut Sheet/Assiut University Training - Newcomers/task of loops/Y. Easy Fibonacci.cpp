#include<iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){   
    int  l ;
    cin>>l;
    int f[l];
    f[1]=0;
    f[2]=1;
    for (int i = 1; i <= l; i++)
    {
        if(i==1||i==2)cout<<f[i]<<" ";
        else{
            f[i]=(f[i-1]+f[i-2]);
            cout<<f[i]<<" ";
            }
    }
    
    
    
    return 0; 
    
}