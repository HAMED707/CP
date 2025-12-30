    #include<iostream>
    #include<string>
    #include<cmath>
typedef long long ll;
    using namespace std;
   
    int main(){
        string x,y;cin>>x>>y;
      double ans= stod(x+y);
      double res=sqrt(ans)-(int)sqrt(ans);
      cout<<(res>0?"NO":"YES");
    //   if(sqrt(ans)*sqrt(ans)==ans)cout<<"YES";
    //   else cout<<"NO";
    //   cout<<res;
        
    return 0;
    }