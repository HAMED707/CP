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
        }

        for (int x = 1; x <= n; x++)
        {
            for (int z = x+1; z <= n; z++)
            {
                r=(arr[x-1]+arr[z-1])+(z-x);

                if (flag==0 && min>r)
                {
                    min=r;
                }
                if(flag){
                    min=r;
                    flag=0;
                }
                
                r=0;
                
            }
            

        }
        
        flag=1;
        cout<<min<<endl;
        
    }
    
    
    
    
    
    return 0;
}