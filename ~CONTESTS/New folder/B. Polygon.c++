    #include<iostream>
    #include<algorithm>

    using namespace std;
    int main(){
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i];

        sort(arr,arr+n);
        int mx=arr[n-1];
        int sum=0;
        for (int i = 0; i < n-1; i++)sum+=arr[i];
            cout<<(sum>mx?"yes":"no");

        
    return 0;
    }