#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q;
        cin>>n>>q;
        char arr[101][101];
        for(int i = 1; i <= n; i++)
        { 
            for (int z = 1; z <= q; z++)
        {
            cin>>arr[i][z];
        }
        }

        
        int r,c;
        
        cin>>r>>c;
        
        if (arr[r][c-1] !='.' &&
        arr[r][c+1] !='.' &&
        arr[r-1][c] !='.' &&
        arr[r+1][c] !='.' &&
        arr[r-1][c-1] !='.' &&
        arr[r-1][c+1] !='.' &&
        arr[r+1][c-1] !='.' &&
        arr[r+1][c+1] !='.' 
        )
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        
        
        
        
    
    
    
    
    
    
    return 0;
}