
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int counter;
    cin>>counter;
    while (counter--)
    {
        string s,t;
        int mx;
        cin>>s>>t;
        
        mx= max(s.size(),t.size());
        for (int i = 0; i < mx; i++)
        {
            if (i<s.size())
            {
                cout<<s[i];
            }
            if (i<t.size())
            {
                cout<<t[i];
            }

        }
        
        

        cout<<endl;
    
    }
    
        return 0;

}