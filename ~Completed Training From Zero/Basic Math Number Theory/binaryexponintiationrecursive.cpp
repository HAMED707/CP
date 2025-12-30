#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000
using namespace std;


int bExp(int x,int n) {
    if(n==0)return 1;
    if(n==1)return x;
    int r=1;
    int c=bExp(x,n/2);
    if(n%2==1)r=x;
    return r*c*c;
}

int main() {

    int x=3,n=3;
    cout<<bExp(x,n);


    return 0;
}
