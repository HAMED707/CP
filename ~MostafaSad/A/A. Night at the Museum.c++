#include <iostream>
using namespace std;

int main() {
    int res=0;
    string s;
    cin>>s;
    for (char x:s)
    if(x-'a'>13){res+=26-(x-'a');}
    else 
     res+=x-'a';

    cout<<res;
    return 0;
}