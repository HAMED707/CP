// #include<iostream>
// using namespace std;
// int main(){   
    
//     int a,b,sum=0;
//     cin>>a>>b;

//     for (int i = a; i <= b; i++)
//     {
//         sum+=i;
//         cout<<sum;
//     }
    
//     return 0; 
    
// }
#include<iostream>
using namespace std;
int main(){   
    
    int a,b;
    cin>>a>>b;

    for (int i = a; i <= b; i++)
    {
        // int sum = 0;
        // sum=sum+i;
        
        for(int j = a ; j <= b ; j++){
            int sum=0;
            sum+=j;
            
            }
            cout<<i<<" "<<"sum ="<<sum;
    }
    
    return 0; 
    
}