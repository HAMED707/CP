#include<iostream>
using namespace std;
int main(){   
    int l , m=1;
    cin>>l;
    for (int i = 0; i < l; i++)
    {
        for (int x = 0; x <=2; x++)
        {
            cout<<m<<" ";
            m++;
        }
        cout<<"PUM"<<"\n";
        m++;
    }
    
    
    
    return 0; 
    
}