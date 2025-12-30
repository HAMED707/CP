#include<iostream>
#include<vector>
using namespace std;
int isprime(int a){
     int start=a+1,flg=0;
    while(true){    
     if(start%2==0) start++;
     flg=0;
    for (int i =3 ; i*i <= start; i+=2)
    {
        if(start%i==0){start++;flg++;break;}
    }
    if(flg==0){return start;} 
    }   
}
int main(){
    int a,b;
    cin>>a>>b;
    if(isprime(a)==b)cout<<"YES";
    else cout<<"NO";
   return 0;
}