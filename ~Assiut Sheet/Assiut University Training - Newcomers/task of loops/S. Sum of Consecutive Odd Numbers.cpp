#include<iostream>
using namespace std;
int main(){   
    
    int counter;
    cin>>counter;
    while (counter--)
    {
        int a,b,sum=0,min, max;
        cin>>a>>b;
        if (a>b)
        {
            max=a;
            min=b;
        }
        else{
            min=a;
            max=b;
        }
        for (int i = min+1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum+=i;
            }
            
            
        }
        cout<<sum<<"\n";
    }
    
    return 0; 
    
}