#include<iostream>
#include<vector>

using namespace std;


vector<int> printArr(int x){
   vector<int>y;
   for (int i = 1; i <= x; i++)
   {
    y.push_back(i);
   }
   return y;
}

int main(){
    int n;
    cin>>n;
vector<int>a=printArr(n);
for (int i = 0; i < a.size()-1; i++)
{
    cout<<a[i]<<" "; 
}
cout<<n;

return 0;
}