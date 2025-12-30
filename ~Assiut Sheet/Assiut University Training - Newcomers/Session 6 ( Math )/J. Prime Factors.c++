#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
pair<vector<int>, vector<int>>  factors( int x){
vector<int>v;
vector<int>counter;
int cnt=0;
for (int i = 2; i*i<=x ; i++)
{  
    if (x%i==0)
    {
        cnt=0;
        while (x%i==0)
        {
            
            x/=i;
            cnt++;
        } 
        v.push_back(i);
        counter.push_back(cnt);    
    }
}
if (x>1){
     v.push_back(x);
        counter.push_back(1);   
     }
     
     
return make_pair(v,counter);

}          
int main() {   
pair<vector<int>, vector<int>>res;
int num;
cin>>num;
res=factors(num);
vector<int> fctr=res.first;
vector<int> time=res.second;

for (int i = 0; i < time.size(); i++)
{
    cout<<"("<<fctr[i]<<"^"<<time[i]<<")";
    if(i!=time.size()-1)cout<<"*";  
    
}
cout<<endl;


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
} 
