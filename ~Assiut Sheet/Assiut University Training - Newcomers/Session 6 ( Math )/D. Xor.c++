#include<iostream>
using namespace std;
long long checkQ(long long a,long long b,long long q){
    if(q%3==1)return a ;
    if(q%3==2)return b ;
        return (a^b);
     
}
  
int main() {  

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
   long long a,b,c;
   cin>>a>>b>>c;
   cout<<checkQ(a,b,c);
    return 0;
} 
