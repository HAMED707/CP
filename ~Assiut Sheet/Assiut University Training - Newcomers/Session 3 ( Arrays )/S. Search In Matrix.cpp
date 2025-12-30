#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q;
        cin>>n>>q;
        int arr[n][q];
        for(int i = 0; i < n; i++)
        {
            for (int z = 0; z < q; z++)
            {
                cin>>arr[i][z];
            }
 
        }
        
        int s,flag=0;
        cin>>s;
        for(int i = 0; i < n; i++)
        {
            for (int z = 0; z < q; z++)
            {
                if (arr[i][z]==s)
        {
            flag=1;
            
            break;
        }  
        
            }
 
        }
        if (flag==1)
        {
            
            cout<<"will not take number";
            
        }  
        else{
            cout<<"will take number";
            
        }
        return 0;
        }
        