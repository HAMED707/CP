#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        int flag=0,min=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        min=arr[0];
        for (int i = 0; i < n; i++)
        {
            if (min==arr[i])
            {
                flag++;
            }
            
            if (min>arr[i])
            {
                min=arr[i];
                flag=1;
            }
            
        }

        if (flag%2 == 0)
        {
            cout<<"Unlucky"<<endl;
        }
        else{
            cout<<"Lucky"<<endl;
        }

    return 0;
}