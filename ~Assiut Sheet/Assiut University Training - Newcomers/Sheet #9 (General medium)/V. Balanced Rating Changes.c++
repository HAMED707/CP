#include<iostream>
#include<cmath>
#define HAMED ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int main(){
HAMED
      int cnt,gate=1;cin>>cnt;
      int arr[cnt];
      for(int i=0;i<cnt;i++)cin>>arr[i];

      for (int i = 0; i < cnt; i++)
      {
        double res=(double)arr[i]/2;
        if(arr[i]%2==0){
            arr[i]/=2;
        }else{
            if(gate){arr[i]=floor(res);gate=0;}
            else {arr[i]=ceil(res);gate=1;}
        }
      }
      for(int i=0;i<cnt;i++)cout<<arr[i]<<endl;
      
return 0;
}