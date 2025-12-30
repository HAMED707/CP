#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,sum=0,sum2=0;
        cin>>n;
        int arr[n][n];
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
            
        }
        
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    sum+=arr[i][j];
                }
                if (n-1-j == i)
                {
                    sum2+=arr[i][j];
                }
                
                
            }
        }
        
        
    cout<<abs(sum-sum2)<<"\n";
    
    
    
    
    return 0;
}