#include<iostream>
using namespace std;

bool IsPrime(int i){
    
    if(i==2)return true;
    for (int j = 2; j <= i/2; j++)
    {
        if (i%j==0) return false;
    }
    return true;
}
int main(){   
    int n;
    cin>>n;

    for (int i = 2; i <= n; i++)
    {
        if (IsPrime(i))cout<<i<<" ";
    }
    
    
    return 0;

}