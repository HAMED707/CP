#include<iostream>
#include<vector>
using namespace std;
int main(){
    int cnt,flag=0,flg=0;
    string ans;
    cin>>cnt;
    vector<int>arr;
    while (cnt--)
    {
        int x,y;
        cin>>x>>y;
        arr.push_back(y);
        if(x!=y)flag++;
    }
    if(flag==0)ans="unrated";
    else ans="rated";
    if(ans=="unrated"){
        for (int i = 0; i <arr.size()-1 ; i++)
        {if(arr[i]<arr[i+1]){flg++;}
        }if(flg==0)ans="maybe";
        }
    cout<<ans;
   return 0;
}