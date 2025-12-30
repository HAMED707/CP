
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        string a;
        cin>>a;
        int count=0;

        for (int i = 0; i < a.size(); i++)
        {
            count += a[i]-'0';

        }
        
        cout<<count;
        return 0;

}