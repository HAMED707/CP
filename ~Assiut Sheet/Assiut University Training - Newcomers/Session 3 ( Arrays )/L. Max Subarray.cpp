#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long counter,r=0,flag=1,min;
    cin>>counter;
    while (counter--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }

        int i=0,z=0;
        int ma;
        while (true)
        {
            if (z==n-1)
            {
                break;
            }
            
            if (i==z)
            {
                ma=max(arr[i],arr[i+1]);
            }
            else{
                ma=max(ma,arr[i+1]);
            }
                cout<<ma<<" ";
            i++;
            if(i==n-1){
                z++;
                i=z;
                
            }
            

        }
        cout<<endl;
        
        
        
    }
    
    
    
    
    
    return 0;
}