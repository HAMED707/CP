
   
#include<iostream>
#include<cmath>

using namespace std;
int Lenth(int n,int cnt){
    if(n==1)return cnt;
    if(n%2==0)n/=2;
    else n=n*3+1;
    cnt++;
   return Lenth(n,cnt);
}

int main(){
  int n;
  cin>>n;
  cout<<Lenth(n,1);
}