#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        int flag=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int counter=0;
            if (arr[i] %2 !=0)
            {
                cout<<"0"<<endl;
                return 0;
            }
            while (arr[i] %2 ==0)
            {
                counter++;
                arr[i] /=2;
            }
            
            if (i==0 ||  counter < flag )
            {
                flag=counter;
            }
            
            
        }

        cout<<flag<<endl;
    return 0;
}