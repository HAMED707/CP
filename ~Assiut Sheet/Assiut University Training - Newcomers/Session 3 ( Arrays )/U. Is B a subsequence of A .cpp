#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
        
        long long n,q;
        cin>>n>>q;
        int arrn[n];
        int arrq[q];
        for(int i = 0; i < n; i++)
        {
            cin>>arrn[i];
            
        }
        
        for (int i = 0; i < q; i++)
        {
            cin>>arrq[i];
        }
        
        int z=0,
        counter=0;
        for (int i = 0; i < n; i++)
        {
            if (arrn[i]==arrq[z])
            {
                counter++;
                z++;
            }
            
        }
        
        if (counter==q)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    return 0;
}