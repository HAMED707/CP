    #include<iostream>
    #include<algorithm>
    using namespace std;
    typedef long long ll;
      ll freq[10000001]={0};
    int main(){
      ll x;cin>>x;
      ll arr[x];
      for (ll i = 0; i < x; i++)
      {
        cin>>arr[i];
        freq[arr[i]]++;
      }
      
      
      ll ans=0;
      for (ll i = 0; i < 10000001; i++)
      {
        if(freq[i]>1)ans+=freq[i]-1;
        //cout<<freq[i]<<" ";
      }
      if(ans==0)cout<<-1;
      else cout<<ans;
    return 0;
    }