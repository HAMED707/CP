    #include<iostream>
    #include<string>
    #include<cmath>
typedef long long ll;
    using namespace std;
   
    int main(){
       
       int n;string s,t;cin>>n>>s>>t;
       int common=0,sz=2*n;
       for (int i = 1; i <= n; i++)
       {
            if (s.substr(n-i)==t.substr(0,i))
            {
                common=i;
            }
            
       }
     cout<<sz-common;  

    return 0;
    }