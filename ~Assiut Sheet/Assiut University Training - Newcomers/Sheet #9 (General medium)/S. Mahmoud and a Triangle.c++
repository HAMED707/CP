#include<iostream>
#include<algorithm>
using namespace std;

bool solve(int arr[],int n){
    sort(arr,arr+n);
    for (int i = 0; i < n-2; i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    cout<<(solve(arr,n)?"YES":"NO");
    return 0;
}
