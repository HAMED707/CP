#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        long long n;
        cin>>n;
        long long num1 = 0 ;
        long long num2 = 1 ;
        if (n == 1)
        {
            cout<<num1<<endl;
        }
        else if (n == 2)
        {
            cout<<num2<<endl;
        }
        else{
            for (int i = 3; i <= n; i++)
            {
                long long fib = num1+num2;
                num1=num2;
                num2=fib;
            }
            cout<<num2<<endl;
        }
        
        
    return 0;
}