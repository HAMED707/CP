#include <iostream>
// #include<bits/stdc++.h>
using namespace std;
int main(){   
    int a,b,gcd;
    cin>>a>>b;
    int min,max;
    if (a>=b)
    {
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i== 0)gcd=i;
    }
    cout<<gcd<<endl;
    
    

return 0; 
}
