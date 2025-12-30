#include <iostream>

using namespace std;
int main() {
    int a ,v,flag=0;
    cin>>a;
    int arr[a] ;
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];

    }
    
    for (int i = 0; i <= a/2; i++)
    {
        if (arr[i] != arr[a-1-i])
        {
            flag=1;
            break;
        }
        
    }

    if(flag==0)
    {
        cout<<"YES";

    }
    else{cout<<"NO";}
    
    
    
    
    
    return 0;
}