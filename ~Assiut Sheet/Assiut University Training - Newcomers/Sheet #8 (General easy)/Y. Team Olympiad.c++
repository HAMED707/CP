#include<iostream>
#include<vector>
using namespace std;
int main(){
  int sz;
  cin>>sz;
  int arr[sz];
vector<int>pro,mth,pys;
        for (int i = 0; i < sz; i++)cin>>arr[i];
        for (int i = 0; i < sz; i++){
        if(arr[i]==1)pro.push_back(i+1);
        if(arr[i]==2)mth.push_back(i+1);
        if(arr[i]==3)pys.push_back(i+1);
    } 
    int sz_pro=pro.size();    
    int sz_mth=mth.size();   
    int sz_pys=pys.size();   
  int mn=min(sz_pro,min(sz_mth,sz_pys));
  if(sz_pro>mn){int cnt=sz_pro-mn; while(cnt--){pro.erase(pro.begin());}}
  if(sz_mth>mn){int cnt=sz_mth-mn; while(cnt--){mth.erase(mth.begin());}}
  if(sz_pys>mn){int cnt=sz_pys-mn; while(cnt--){pys.erase(pys.begin());}}
 
 if(pro.empty()||mth.empty()||pys.empty())cout<<0;
  else{cout<<mn<<"\n";
  for (int i = 0; i < mn; i++){
    cout<<pro[i]<<" "<<mth[i]<<" "<<pys[i]<<endl;
  }}
   return 0;
}