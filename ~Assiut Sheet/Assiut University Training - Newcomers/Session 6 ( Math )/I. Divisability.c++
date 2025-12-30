#include<iostream>

using namespace std;
long long sumfrom1st(long long n,long long x){
    long long k = n / x;
    return x * k * (k + 1) / 2;
}
 long long sumDivisors(long long a,long long b,long long x){
    long long max_=max(a,b);
    long long min_=min(a,b);
    
    long long to_min=sumfrom1st(min_-1,x);
    long long to_max=sumfrom1st(max_,x);
    long long final_res=to_max-to_min;
 
    return final_res;
 }
int main() {    

long long a,b,x;
cin>>a>>b>>x; 
    cout<<sumDivisors(a,b,x);
return 0;
} 
////By AshrafYousry, contest: Sheet #6 (Math - Geometry), problem: (I) Divisability, Accepted, #, Copy
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// long long a,b,x,r1,r2,e=0,n=0;
// cin>>a>>b>>x;
// r1=max(a,b)/x;
// if(min(a,b)%x==0){r2=min(a,b)/x;}
// else{r2=min(a,b)/x;r2++;}
// n=r1-r2+1;
// e=(n*(r2+r1))/2;
// e=e*x;
// cout<<e;
// return 0;
// }