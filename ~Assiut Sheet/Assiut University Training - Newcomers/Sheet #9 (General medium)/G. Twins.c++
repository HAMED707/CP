    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
      int n,sum=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)cin>>arr[i];
      sort(arr,arr+n);
      
      for (int i = 0; i < n; i++)
      {
        sum+=arr[i];
      }
      int y=0,z=0;
      for (int i = n-1; i >= 0; i--)
      {
        y+=arr[i];
        z++;
        if(y>sum-y){
            break;
        }
      }
      cout<<z;
      
      
    return 0;
    }