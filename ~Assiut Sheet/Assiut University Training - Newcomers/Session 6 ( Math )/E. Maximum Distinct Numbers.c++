#include<iostream>
#include<cmath>
using namespace std;
long long check(long long N){
    long long k = (-1 + sqrt(1 + 8 * N)) / 2;  
    return k;
    
    }
    
  
int main() {  

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
   long long num;
   cin>>num;
   cout<<check(num);
    
     


    return 0;
} 
