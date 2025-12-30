#include <bits/stdc++.h> 


using namespace std;


int main(){
     ios::sync_with_stdio(false); 
    cin.tie(nullptr);
int counter ;
cin>>counter;
while (counter--)
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[0] == arr[1] && arr[1] == arr[2]){cout<<0<<endl;}
    else if(arr[0]==arr[1]||arr[1]==arr[2])cout<<abs(arr[2]-arr[0])<<endl;
    else cout<<abs(arr[2]-arr[1])+abs(arr[1]-arr[0])<<endl;


}

return 0;
}