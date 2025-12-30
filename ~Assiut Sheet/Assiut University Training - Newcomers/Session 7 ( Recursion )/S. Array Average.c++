
   
#include<iostream>
#include<cmath>

using namespace std;
typedef long long ll;
double av(int n,double ans,int cnt){
    double input;
    if(n==0)return ans/cnt;
    cin>>input;
    ans+=input;
    cnt++;
    return av(n-1,ans,cnt);
}
int main(){
  int n;
  cin>>n;
 printf("%.6lf",av(n,0,0));
  
 
  
}