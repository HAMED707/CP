#include<iostream>
using namespace std;
long long sumodd(long long x){
        long long N=(x+1)/2;
    long long oddres=N*N;
    return oddres;  
}
long long sumeven(long long x){
        long long N=x/2;
    long long evenres=N*N+N;
    return evenres;  
}
long long sumall(long long max,long long min){
        long long N=(max-min)+1;
    long long res=(N*(min+max))/2;
    return res;  
}
  
int main() {  

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    long long a,b;
    cin>>a>>b;
     long long max=0;
     long long min=0;
        max = (a > b) ? a : b;
        min = (a < b) ? a : b;
    cout<<sumall(max,min)<<endl;
    cout<<sumeven(max)-sumeven(min-1)<<endl;
    cout<<sumodd(max)-sumodd(min-1)<<endl;

     


    return 0;
} 
