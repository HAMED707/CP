#include <iostream>
#include <vector>
using namespace std;

int re(int i ,int lenth,int capacity,vector<int>&weight,vector<int>&value,vector<vector<int>>&memo){
if(i==lenth)return 0;
if(memo[i][capacity]!=-1)return memo[i][capacity];
int take=0;
if(capacity-weight[i]>=0)
 take =re(i+1,lenth,capacity-weight[i],weight,value,memo)+value[i];

int no =re(i+1,lenth,capacity,weight,value,memo);
memo[i][capacity]=max(take,no);
return memo[i][capacity];
}
int main() {

     int w,v;
        vector<int>weight;
        vector<int>value;
        
    int cnt,capacity;
    cin>>cnt>>capacity;
    int lenth=cnt;
    vector<vector<int>>memo(cnt,vector<int>(capacity+1,-1));
    while (cnt--)
    {
       
        cin>>w>>v;
        weight.push_back(w);
        value.push_back(v);
    }
   cout<< re(0,lenth,capacity,weight,value,memo);
    return 0;
}
