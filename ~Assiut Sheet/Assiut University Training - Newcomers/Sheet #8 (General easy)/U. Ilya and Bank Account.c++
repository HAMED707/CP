#include<iostream>
using namespace std;
int solve(int n){
   return max(n/100*10+n%10,n/10);
}

int main(){
   
   int n;
   cin>>n;
   if(n>=0)cout<<n;
   else cout<<solve(n);
//    string s;
//    cin>>s;
//    if(stoi(s)>=0)cout<<s;
//    else{
//     int sz=s.size();
//     string cpy=s;
//     cpy.erase(sz-1);
//     s.erase(s.begin()+sz-2);
//     cout<<max(stoi(s),stoi(cpy));
//    }
   return 0;
}