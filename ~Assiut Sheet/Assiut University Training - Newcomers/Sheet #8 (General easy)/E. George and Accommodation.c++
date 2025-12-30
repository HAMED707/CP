

#include <iostream>
  
using namespace std;


int main() {
 
 int cnt,ans=0;
 cin>>cnt;
 while(cnt--){
    int p,q;
    cin>>p>>q;
    if(q-p>=2)ans++;
 }
 
 cout<<ans;
    return 0;
}