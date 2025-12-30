
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        string ab;
        cin>>ab;
        

        for (int i = 0; i < ab.size(); i++)
        {
            if (ab[i]==',')
            {
                cout<<" ";
            }
            
            else if(ab[i]>= 'a' && ab[i]<='z')
            {
                int as=ab[i]-32;
                char res = as;
                cout<<res;
            }else{
                int as=ab[i]+32;
                char res = as;
                cout<<res;
            }
            

        }
        
        
        return 0;

}