
#include <iostream>
// #include<bits/stdc++.h>
#include <algorithm>

using namespace std;
int main() {
        string a,b;
        cin>>a;
        int count=1;

    sort(a.begin(),a.end());
        for (int i = 0; i < a.size() ; i++)
        {

            while (a[i]== a[++i])
            {
                count++;
            }
            i--;
            cout<<a[i] <<" : "<<count<<endl;
            count=1;

        }
        
        
return 0;
}