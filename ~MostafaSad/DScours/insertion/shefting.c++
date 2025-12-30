#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[]={10,11,13,4,};
   int size=4;
   for(int i=size-1;i>=1;--i){
   arr[i+1]=arr[i];
   }
   arr[1]=7;
   size++;
   for(int i=0;i<4;i++){
   cout<<arr[i]<<" ";

   }
    return 0;
}
