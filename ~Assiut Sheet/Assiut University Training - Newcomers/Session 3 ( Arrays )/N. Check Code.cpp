#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        int n1,n2,c=0;
        cin>>n1>>n2;
        string s;
        cin>>s;

        if (s[n1] != '-')
        {
            cout<<"No"<<endl;
            return 0;
        }
        if (n1+n2+1 !=s.size())
        {
            cout<<"No"<<endl;
            return 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]>=48 && s[i]<=57 && i != n1 )
            {
                c++;
            }
            
        }
        if (c==n1+n2)
        {
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
        
        
    return 0;
}