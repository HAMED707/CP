#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        int flag=0,min=0,max=0,
        minIndex=0,
        maxIndex=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        min=arr[0];
        max=arr[0];
        
        for (int i = 0; i < n; i++)
        {
            if (min>arr[i])
            {
                min=arr[i];
                minIndex=i;
            }
            
            if (max<arr[i])
            {
                max=arr[i];
                maxIndex=i;
            }
            
        }
        arr[minIndex]=max;
        arr[maxIndex]=min;
        
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }

    return 0;
}