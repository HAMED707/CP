#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        long long sum=0;
        int n;
        cin>>n;
        string v;
        cin>>v;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i] - '0';
            
        }

        cout<<sum<<endl;

    return 0;
}