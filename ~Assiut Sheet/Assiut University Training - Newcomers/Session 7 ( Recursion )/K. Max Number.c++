#include<iostream>
#include<algorithm>
#include <climits> 
using namespace std;
//typedef long long ll;

   
int Max(int n,int maxx,int x){
   if (n==0)return maxx;
   cin>>x;
    maxx=max(x,maxx);
   return Max(n-1,maxx,x);
}
int main(){
  int n ; cin>>n;  
 cout<<Max(n,INT_MIN,0);
}