#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int row ,col,res=0,ans=0;
    cin>>row>>col;
    char arr[row][col];
    for (int i = 0; i < row; i++)
    {for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }}
    
    for (int i = 0; i < row; i++)
    {for (int j = 0; j < col; j++)
        {
            if(arr[i][j]=='.'){res++;arr[i][j]='x';}
            if(arr[i][j]=='S'){
                res=0;
            for(int k = 0; k < j; ++k) {arr[i][k] = '.';}
                break;}
        }
        if(res>0)ans+=res;
        res=0;
        }

  for (int j = 0; j < col; j++)
    {for (int i = 0; i < row; i++)
        {
            if(arr[i][j]=='.'){res++;}
            if(arr[i][j]=='S'){res=0;break;}
        }
        if(res>0)ans+=res;
        res=0;
        }

    
    cout<<ans;
}