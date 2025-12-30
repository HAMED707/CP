#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>  
using namespace std;
vector<int> carry;
vector<int> check;
void solve(int n,int m,int a[],int b[]){

    for (int i = 0; i < n; i++)
    {
         carry.push_back(a[i]-b[i]);
         check.push_back(b[i]);
         //cout<<b[i]<<" ";
    }
     int cnt=n;
    for (int i = 0; i < carry.size(); i++)
    {
       
        if(carry[i]==b[cnt]){
         
         check.push_back(carry[i]);

            //cout<<carry[i]<<" ";
             int elementToRemove = carry[i];
             auto newEnd = std::remove(carry.begin(), carry.end(), elementToRemove);
             carry.erase(newEnd, carry.end());
             cnt++;
        }

    }
        
          int sum =accumulate(carry.begin(),carry.end(),0);
           int f=m-1;
           int g=n-1;
            while(f!=g){
                if(b[f]==sum){
                check.push_back(b[f]);
                      //cout<<b[f];
                      }
                f--;
            }
        
        if(check.size()==m){
            cout<<"Yes";
        }else cout<<"No";

    }
    

int main() {
 int n,m;cin>>n>>m;
 int a[n],b[m];
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
 }
  for (int i = 0; i < m; i++)
 {
    cin>>b[i];
 }
solve(n,m,a,b);
    return 0;
}