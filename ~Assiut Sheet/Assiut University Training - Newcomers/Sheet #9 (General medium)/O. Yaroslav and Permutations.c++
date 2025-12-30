    #include<iostream>
    #include<vector>
    using namespace std;
    int freq[10001]={0};
    int main(){
        int x,mx=0,ans=0;cin>>x;
        int arr[x];
        vector<int>results;
        for (int i = 0; i < x; i++)
        {cin>>arr[i];
        freq[arr[i]]++;
        }
        //
        for (int i = 0; i < 10001; i++)
        {
         if(freq[i]>0){
            mx=max(mx,freq[i]);
            results.push_back(freq[i]);
            }
         }
        
        
        
        for (int i = 0; i < results.size();i++)
        {
         if(results[i]==mx ||results[i]==mx-1)ans++;
         }
        
            if (mx <= (x + 1) / 2) {
          cout << "YES" << endl;
            } else {
            cout << "NO" << endl;
         }
        
        
        

        
    return 0;
    }