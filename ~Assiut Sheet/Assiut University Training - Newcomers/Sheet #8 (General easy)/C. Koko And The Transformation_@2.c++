

#include <iostream>
  
using namespace std;


int main() {
 int n,m;cin>>n>>m;
 int a[n],b[m];
 int suma=0,sumb=0;
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
    suma+=a[i];
 }
  for (int i = 0; i < m; i++)
 {
    cin>>b[i];
    sumb+=b[i];
 }
   cout<<(suma==sumb?"Yes":"No");
    return 0;
}