
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
        int count=0 ,count_2=0 ;

        for (int i = 0; i <= a.size(); i++)
        {
            count = i;

        }
        

        if (count>10)
        {
            for (int i = 1; i < a.size()-1; i++)
        {
            count_2 =i;

        }
        cout<<a[0]<<count_2<<a[count-1]<<endl;
        }
        
        else{
            cout<<a<<endl;
        }
        
    }
    
        
        return 0;

}