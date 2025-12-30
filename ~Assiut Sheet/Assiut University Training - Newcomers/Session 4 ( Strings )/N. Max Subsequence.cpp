
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    string s ;
    int n, mx=0;
    cin>>n>>s;
    
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=s[i+1])
        {
            mx++;
        }
        
        
    }
    cout<<mx;
        return 0;

}