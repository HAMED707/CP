#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int counter;
    cin>>counter;
    while (counter--)
    {
        string a;
        cin>>a;
        int flag=0;
 
        for (int i = 0; i < a.size()-2; i++)
        {
            /*(a[i]=='0' && a[i+1] == '1'&&a[i+2]=='0')*/
            if ((a[i]=='0' && a[i+1] == '1'&&a[i+2]=='0')||
            (a[i]=='1' && a[i+1] == '0'&&a[i+2]=='1'))
            {
                flag=1;
                break;
            }
            
 
        }
        if (flag==1)
        {
            cout<<"Good"<<endl;
        }
        else{
                cout<<"Bad"<<endl;
                
            }
 }
        return 0;
    
 
 

}