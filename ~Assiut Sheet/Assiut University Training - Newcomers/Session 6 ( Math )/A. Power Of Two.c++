#include<iostream>
using namespace std;
bool powerof2(long long x){
    long long res =1;
    while (res<x)
    {
       res*=2;
    }
    return res==x;
}     
bool bitwisepower2solution(long long x){
   return x>0&&((x&x-1)==0);
}      
int main() {  
     ios::sync_with_stdio(false);
    cin.tie(nullptr); 
long long num;

cin>>num;
   cout<<(bitwisepower2solution(num)?"YES":"NO");



    return 0;
} 
