#include<iostream>
#include<math.h>



using namespace std;
void time(int x,char car){

for (int i = 0; i <x; i++)
{
    cout<<car<<" ";
}
cout<<endl;
    
}

int main(){
    int cnt;
    cin>>cnt;
while (cnt--)
{
    int x;
    char y;

    cin>>x>>y;
    time(x,y);
}

return 0;
}