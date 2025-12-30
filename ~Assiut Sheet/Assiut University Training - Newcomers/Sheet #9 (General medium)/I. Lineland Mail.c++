    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
      int n,mx,mn;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)cin>>arr[i];

      for (int i = 0; i < n; i++)
      {
        if(i==0){mx=abs(arr[i]-arr[n-1]);mn=abs(arr[i]-arr[i+1]);}
        else if(i==n-1){mx=abs(arr[i]-arr[0]);mn=abs(arr[i]-arr[i-1]);}
        else{mx=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
             mn=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));}
        cout<<mn<<" "<<mx<<endl;
      }
      
    return 0;
    }