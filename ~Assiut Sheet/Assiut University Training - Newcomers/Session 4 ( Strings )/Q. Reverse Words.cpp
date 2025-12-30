
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    string s;
    
    
    int t=0;
    while (cin>>s)
    {
        reverse(s.begin(),s.end());
        if (t==1)
        {
            cout<<" ";
        }
        t=1;
        cout<<s;
        
    }
    
        
        

    
    
        return 0;

}