#include<iostream>
#include<algorithm> 
using namespace std;

int distinct(int arr[],int x){
    if (x == 0) return 0;
    int size=x;
    sort(arr,arr+x) ;
for (int i = 1; i < x; i++)
{
    if (arr[i] == arr[i - 1]) {
            size--;
        }
   
}
 return size;
}
int main(){
int x;
cin >>x;
int arr[x];
for (int i = 0; i < x; i++)
{
    cin>>arr[i];
}
cout<<distinct(arr,x)<<endl;


return 0;
}