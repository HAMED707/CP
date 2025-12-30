#include <iostream>
using namespace std;
typedef long long ll;

ll n,x;
ll arr[100];
bool re(ll SumOrSub,ll i){
    if(i==n)return SumOrSub==x;
    bool route1 =  re(SumOrSub+arr[i],i+1);
    bool route2 =  re(SumOrSub-arr[i],i+1);
   return ( route1 || route2 ) ;

     
}
int main() {

cin>>n>>x;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<(re(arr[0],1)?"YES":"NO");
 
    return 0;
}
