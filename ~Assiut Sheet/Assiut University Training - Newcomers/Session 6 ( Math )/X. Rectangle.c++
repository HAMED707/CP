#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {  
 
 double x,y,x1,y1,x2,y2,x3,y3;
  cin>>x>>y>>x1>>y1>>x2>>y2>>x3>>y3;
   int n;
    cin >> n;
int xmax=max({x,x1,x2,x3});
int xmin=min({x,x1,x2,x3});
int ymax=max({y,y1,y2,y3});
int ymin=min({y,y1,y2,y3});
//cout<<xmax<<xmin<<ymax<<ymin<<endl;
   while (n--)
   {
    int a,b;
    cin>>a>>b;
    if (a>=xmin&&a<=xmax&&b>=ymin&&b<=ymax)
    {
        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
    
   }
   
    
    
 
    return 0;
}   