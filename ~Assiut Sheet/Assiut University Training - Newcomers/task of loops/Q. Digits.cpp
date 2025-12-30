#include<iostream>
using namespace std;
int main(){   
    
    int counter;
    cin>>counter;
    while (counter--)
    {
        string  n;
        cin>>n;
        // while (n>0)
        // {
            
        //     n_r=n%10;
        //     cout<<n_r<<" ";
        //     n=n/10; 
        // }
        for (int i=n.size()-1; i >= 0; i--)
        {
            cout<<n[i]<<" ";
        }
        
        cout<<"\n";
        
    }
    return 0; 
    
}