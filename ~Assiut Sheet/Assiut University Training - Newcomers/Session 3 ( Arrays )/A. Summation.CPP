#include <iostream>
using namespace std;
int main() {
    long long n,sum=0;
    // int arr[n];
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<abs(sum);
    return 0;
}