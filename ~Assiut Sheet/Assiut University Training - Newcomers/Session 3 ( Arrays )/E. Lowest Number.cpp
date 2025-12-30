#include <iostream>

using namespace std;
int main() {
    int a,v,p;
    cin>>a;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    v=arr[0];
    p=1;
    for (int i = 1; i < a; i++)
    {
        if (arr[i]<v)
        {
            v=arr[i];
            p=i+1;
        }
        
    }
    cout<<v<<" "<<p;
    
    
    
    return 0;
}