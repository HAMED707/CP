#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int ans=0;
int re(int n,int x){
    if(n>x)return 0;
    if(n==x)return 1;
    
    return re(n+1,x)+re(n+2,x)+re(n+3,x);
}

int main() {
    int n,x;
    cin>>n>>x;
    cout<<re(n,x);
    return 0;
}