#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q,x;
        cin>>n>>q;
        int arr[q+1]={};
        
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            arr[x] ++;
            
        }

        for (int i = 1; i <= q; i++)
        {
            cout<<arr[i]<<"\n";
        }
        
        
    return 0;
}