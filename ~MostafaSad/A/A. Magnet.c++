#include <iostream>
using namespace std;

int main()
{
    int counter , num,flag=0,Input=0;
    cin>>counter;
int x=counter;
    while(counter--){

    cin>>num;
if (counter<x){
    if(num!=Input){
    flag++;
    }
    }
    Input=num;
    }

cout<<flag;

    return 0;
}
