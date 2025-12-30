#include<iostream>
using namespace std;
int main(){   
    int a,b ,y=0;
    cin>>a>>b;
    for (int i = a; i <=b; i++)
    {
        int x=i,flag=0;
        
        while(x>0)
        {
            int ld=x%10;
            if(ld != 4 && ld != 7){
                flag=1;
            }
        
        x=x/10;
    }
        if(flag==0){
            y=1;
            cout<<i<<" ";
            }
    }  
    if(y==0){
            cout<<"-1";
        }

return 0; 
}
