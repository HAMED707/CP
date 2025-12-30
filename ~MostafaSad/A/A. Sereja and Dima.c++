
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long counter,S=0,D=0,sum,flag=0;
    float c;
    cin >> counter;
    c=ceil( counter%2);
if ( ceil (counter%2==0))
{
    while (counter--)
    {
        cin>>sum;
        if (flag<=counter/2)
        {
            
            D+=sum;
            flag++;
            
        }else{
            
            S+=sum;
        }
        
        
    }
    
}else{
     while (counter--)
    {
        cin>>sum;

        if ((counter+1)%2==0)
        {
            
            D+=sum;
            flag++;
            
        }else{
            
            S+=sum;
        }
    }

}
cout<<S<<" "<<D<<endl<<c;
    
    return 0;
}
