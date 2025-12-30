#include <iostream>
 
using namespace std;
int main() {
    int a,flag=0;
    cin>>a;
    int arr[a];
    
        for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
 
        for (int i = 0; i < a; i++)
    {
        if(arr[i]==x){
            cout<<i<<endl;
            flag=1;
            break;
            }
        
        
    } 
 
    if(flag==0)cout<<"-1";
 
    return 0;
}