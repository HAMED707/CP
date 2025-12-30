#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long sum=0,sum2=0,min;
    
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int z = 0; z < n; z++)
        {
            cin>>arr[z];
            sum2+=arr[z];
        }
        if (sum==sum2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
        
    
    
    
    
    
    
    return 0;
}