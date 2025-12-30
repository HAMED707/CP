#include<iostream>
using namespace std;
int main(){   
    
    int n;
    int even=0,odd=0,pos=0,neg=0;
    cin>>n;
    for(int i=1 ; i<=n; i++)
{
    int number;
    cin>>number;
    if (number%2==0)
    {
        even++;
    }
    else{
        odd++;
    }
    if (number>0)
    {
        pos++;
    }
    else if(number<0){
        neg++;
    }
}   
cout<<"Even: "<<even<<'\n';
cout<<"Odd: "<<odd<<'\n';
cout<<"Positive: "<<pos<<'\n';
cout<<"Negative: "<<neg<<'\n';

    return 0;

}