
#include <iostream>

using namespace std;

int main()
{
    int counter,flag=0,flagColor=0;
    char color,temp,temp2;
    cin >>counter;
    
    while (counter--)
    {
        cin>>color;
        

        if (flag==0)
        {
            temp=color;
            flag++;
            continue;;
        }
        if (temp==color)
        {
            flagColor++;
        }
        temp=color;


    }
    cout<<flagColor;
    return 0;
}
