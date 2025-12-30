#include<iostream>
#include<math.h>



using namespace std;
long long equation(int z,int q){
    long long R=0;
    for (int i = 2; i <= q; i+=2)
    {
   
            R+=pow(z,i);  
 
    }
    return R;
    
}

int main(){
 int x,y;
 cin>>x>>y;
 cout<<equation(x,y);
return 0;
}