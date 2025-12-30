// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
    
        
//         long long n,q,flag=0;
//         cin>>n>>q;
//         int arr[n];
//         for(int i = 1; i <= n; i++)
//         {
//             cin>>arr[i];
            
//         }
//         while (q--)
//         {
//             int num;
//             cin>>num;
//             for (int i = 1; i <= n; i++)
//             {
//                 if (num==arr[i])
//                 {
//                     flag++;

//                 }
                
//             }
//             if (flag==1)
//             {
//                 cout<<"found\n";
//             }
//             else{
//                     cout<<"not found\n";
//                 }
//             flag=0;
            
//         }
        
        
    
    
    
    
    
    
//     return 0;
// } 
// time limit

#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[],int left,int right,int search){

    while (left <= right)
    {
        int mid=left+(right-left)/2;
        if (arr[mid]==search)
        {
            return mid;
        }
        else if( arr[mid] < search){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        
    }
    return -1;
    
}
int main() {
    
        
        long long n,num,q;
        cin>>n>>q;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        sort(arr,arr+n);
        while (q--)
        {
            int num;
            cin>>num;
            int result=binarySearch(arr,0,n-1,num);
    if(result==-1)
    {
        cout<<"not found\n";
    }else{
        cout<<"found\n";
                }
    
            
        }
        
        
    
    
    
    
    
    
    return 0;
}