#include<iostream>
using namespace std;
int main(){   
    
    int a,b;
    while (cin>>a>>b)
    {
    
        int sum = 0,min,max;
        if (a<=0 || b<=0)
        {
            return 0;
        }
        if (a>b)
        {
            max=a;
            min=b;
        }
        else{
            min=a;
            max=b;
        }
        
    for (int i = min; i <= max; i++)
    { 
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<"\n";

    
    }
    

    
    return 0; 
    
}