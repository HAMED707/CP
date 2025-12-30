#include<iostream>
using namespace std;
int main(){   
    
    int n ,num=0;
    cin>>n;
    for ( int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            num++;
        }
        } 
            if (num==2)
            {
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
            
        
        
    
    
    
    return 0;

}