#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
 long long sumDivisors(long long x){
     long long sum = (x > 1) ? 1 + x : 1;
   
    for (long long i = 2; i*i <= x; i++)
    {  
        if(x%i==0){
           i==x/i?sum+=i:sum+=i+x/i;
        }  
    }
    return sum;
 }
int main() {    

long long num;
cin>>num; 
    cout<<sumDivisors(num);
return 0;
} 
