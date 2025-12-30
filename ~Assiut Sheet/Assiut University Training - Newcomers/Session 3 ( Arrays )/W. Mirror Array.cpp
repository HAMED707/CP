#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q;
        cin>>n>>q;
        while (n--)
        {
            int arr[q];
            for (int i = 0; i < q; i++)
            {
                cin>>arr[i];
            }
            
            for (int i = q-1; i >= 0; i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
        
    
    return 0;
}