#include<iostream>
using namespace std;
int main(){   
    int l;
    cin>>l;
    
        int s=l-1;
        for (int i = 1; i <= l; i++)
    {
        for (int g = 1; g <= s; g++)
        {
            cout<<" ";
        }
        for (int f = 1; f < i*2 ; f++)
        {
            cout<<"*";
        }
        
        s--;
        cout<<endl;
    }
    
    int x=1;
        for (int i = l; i >=1 ; i--)
    {
        
        for (int g = 1; g < x; g++)
        {
            cout<<" ";
        }
        for (int f = i*2; f > 1  ; f--)
        {
            cout<<"*";
        }
        
        x++;
        cout<<endl;
    }
    
    
    
    return 0; 
    
}