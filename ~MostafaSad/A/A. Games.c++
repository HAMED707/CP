#include <iostream>
using namespace std;

int main() {    
  int x,res=0; 
  cin>> x;
    int arr1[x];
    int arr2[x];

    for (int i = 0; i < x; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    for (int i = 0; i < x; i++)
    {
     for (int j = 0; j < x; j++)
     {
        if (arr1[i]==arr2[j])
        {
            res++;
        }
     }
    }
     cout<<res;
    
    return 0;
}