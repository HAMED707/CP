#include<iostream>
#include<cmath>
 
using namespace std;
 
int main() {  
 
   double x;
    cin>>x;
    double res=0;
    for (int i = 2; i <= x; i++)
    {
        res+=log10(i);
    }
    int numofdigits=res+1;
    cout<<"Number of digits of "<<x<<"! is "<<numofdigits;
    return 0;
} 