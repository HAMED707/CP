#include<iostream>
using namespace std;
int main(){   
    
    while (true)
    {
        int password;
        cin>>password;
        if (password==1999)
        {
            cout<<"Correct"<<'\n';
            break;
        }
        else{
            cout<<"Wrong"<<'\n';
        }
    }
    
    return 0;

}