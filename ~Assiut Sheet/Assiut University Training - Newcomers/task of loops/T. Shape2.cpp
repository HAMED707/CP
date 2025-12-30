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
    
    
    return 0; 
    
}