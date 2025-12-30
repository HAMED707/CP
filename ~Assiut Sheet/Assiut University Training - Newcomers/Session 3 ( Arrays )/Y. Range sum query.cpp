#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q;
        cin>>n>>q;
        int arr[n];
        for(int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            
        }
        long long  pre[n]={};
        for (int i = 1; i <= n; i++)
        {
            pre[i]=arr[i]+pre[i-1];
        }
        
        while (q--)
        { 
            int a,b;
            cin>>a>>b;
            cout<<pre[b]-pre[a-1]<<endl;
            
            
        }
        
        
    
    
    
    
    
    
    return 0;
}