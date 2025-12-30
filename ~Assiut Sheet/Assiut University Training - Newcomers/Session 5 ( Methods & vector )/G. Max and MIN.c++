#include<iostream>
#include<math.h>



using namespace std;
void maxmin(int arr[],int n ){
int max=0,min=100000005;
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i]){  
            max=arr[i]; 
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<min<<" "<<max;
    
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    maxmin(arr,size);
    

return 0;
}