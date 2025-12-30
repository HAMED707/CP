#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count[4]={0};
    int one=0,two=0,tri=0;
    for (char ch : s)
    {
         int digit = ch - '0';
        if (digit >= 1 && digit <= 3) {
            count[digit]++;
        }
    }
    bool first=false;
    for (int i = 1; i <= 3; i++)
    {
        while (count[i]--)
        {
            if(first)cout<<"+";
            cout<<i;
            first=true;
        }
        
    }
    
    
   return 0;
}