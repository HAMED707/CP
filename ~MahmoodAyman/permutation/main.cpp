#include <algorithm>
#include <iostream>
#define all(X) X.begin(),X.end()

bool OK(int arr[],int n) {


    for (int i=0;i<n;i++) {
       int sum=arr[i];
    for (int j=i+1;j<n;j++) {
        sum+=arr[j];
        if(sum%(j-i+1)==0)return 0;
    }
    }return 1;
}
using namespace std;
int main() {


    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        arr[i]=i+1;
    }

    do {
        if(OK(arr,n)) {
            for (int i=0;i<n;i++) {
                cout<<arr[i]<<" ";
            }cout<<'\n';
        }

       // cout<<-1<<'\n';

    }while (next_permutation(arr,arr+n));




    return 0;
}
