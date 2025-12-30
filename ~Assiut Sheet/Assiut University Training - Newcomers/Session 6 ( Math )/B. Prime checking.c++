#include<iostream>
using namespace std;
bool primechecking(long long x){
    if(x==0||x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    
    for (int i = 3; i*i <= x; i+=2)
    {
        if (x%i==0)
        {
            return false;
        } 
    }
    return true;
}         
int main() {  
     ios::sync_with_stdio(false);
    cin.tie(nullptr); 
long long num;
cin>>num;
cout << (primechecking(num)?"YES":"NO");
   

    return 0;
} 
