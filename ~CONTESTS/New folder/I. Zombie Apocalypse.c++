    #include<iostream>
    #include<string>
    #include<cmath>
typedef long long ll;
    using namespace std;
   
    int main(){
       int x,y,cnt;cin>>x>>y>>cnt;
       bool ans=1;
       while (cnt--)
       {int z,v,s;cin>>z>>v>>s;

         if(s-v==y&&s-z==x||s+v==y&&s-z==x){
            ans=0;
            break;
            }

       }
       cout<<(ans?"YES":"NO");
    return 0;
    }