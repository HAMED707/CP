    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
      int n,mn=1e9;
      string s;
      cin>>n>>s;
      int arr[n];
      for(int i=0;i<n;i++)cin>>arr[i];
      for (int i = 0; i < n-1; i++)
      { 
        if(s[i]=='R'&&s[i+1]=='L'){mn=min(mn,(arr[i+1]-arr[i])/2);break;}
}
    if(mn!=1e9)cout<<mn;
      else cout<<-1;
    return 0;
    }