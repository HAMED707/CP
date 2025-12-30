#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
string Multi(string g,string s){
     reverse(g.begin(),g.end());
     reverse(s.begin(),s.end());
   int size_g=g.size(),c=0;
   int size_s=s.size();
    string ans="";
    for (int i = 0; i < size_g; i++)
    {
        for (int j = 0; j < size_s; j++)
        {
            int pos=i+j;
            int x= (g[i]-'0')*(s[j]-'0');
            while (x>0)
            {  while(ans.size()<pos+1){
                ans+="0";
            }
                int tmp=(x%10)+ans[pos]-'0';
                ans[pos]=char(tmp%10+'0')+c;
                x/=10;
                x+=(tmp/10);
                pos++;
            }
             
            
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
string Add(string g,string s){
    int p1=0,p2=0,c=0;
    string ans="";
    reverse(g.begin(),g.end());
    reverse(s.begin(),s.end());

    int size_g=g.size();
    int size_s=s.size();
    while (p1<size_g&&p2<size_s)
    {
        int x= g[p1]-'0'+s[p2]-'0'+c;
        ans+=char(x%10+'0'); // this better than ((ans = char(x%10+'0')+ans)) O(n) becouse it is like marge arrays iterat every time   ;
        p1++,p2++;
         c=x/10;

    }
    while (p1<size_g)
    {
         int x= g[p1]-'0'+c;
         ans+=char(x%10+'0');
         c=x/10;
         p1++;

    }while (p2<size_s)
    {
         int x= s[p2]-'0'+c;
         ans+=char(x%10+'0');
         c=x/10;
         p2++;

    }
    if(c>0)ans+="1";
    
    reverse(ans.begin(),ans.end());
    return ans;
}
 
int main() {  

string num1,num2="9999";
cin>>num1;
cout<<Add(num1,num2)<<endl<<Multi(num1,num2); 
    return 0;
} 
