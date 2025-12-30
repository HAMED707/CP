
   
#include<iostream>
#include<cmath>

using namespace std;
bool palindrome(int arr[],int i,int n){
    if(i==n)return 1;
    if(arr[i]!=arr[n-i-1])return 0;
    return palindrome(arr,i+1,n);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<(palindrome(arr,0,n)?"YES":"NO");
}