#include<iostream>


using namespace std;
long long GCD(long long x,long long y){
    if(x>y)swap(x,y);
    while (x>0)
    {
        y%=x;
        swap(x,y);
    }
    return y;
} 
long long LCM(long long x,long long y){
    long long lcm=(x*y)/GCD(x,y);
    return lcm;
} 
int main() {    
    long long a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<" ";
    cout<<LCM(a,b);

return 0;
} 
