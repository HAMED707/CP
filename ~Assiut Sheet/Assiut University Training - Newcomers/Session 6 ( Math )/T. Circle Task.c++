#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

 
int main() {  
 
 long long x,y,R,cnt;
 cin>>x>>y>>R>>cnt;
 while (cnt--)
 {
    long long a,b;
    cin>>a>>b;
    cout<<((a-x)*(a-x)+(b-y)*(b-y)<=R*R?"YES":"NO")<<endl;
 }
 
  
    return 0;
} 