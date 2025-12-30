#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a ,v,flag=0;
    cin>>a;
    int arr[a] ;
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];

    }
    for(int i = 0; i < a; i++)
    {
        for (int  z = 0;   z < a-1;   z++)
        {
            if (arr[z]>arr[z+1])
            {
                swap(arr[z],arr[z+1]);
            }
            
        }
        
    }
    
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
}