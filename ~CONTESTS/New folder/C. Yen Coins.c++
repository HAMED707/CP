
        #include<iostream>
    using namespace std;
    int main(){
        long long a,b,c,x;cin>>a>>b>>c>>x;
        int cnt=0;
        for (int i = 0; i <= a; i++)
          for (int j = 0; j <= b; j++)
            for (int z = 0; z <= c; z++){
                if(i*500+j*100+z*50==x)cnt++;
                
            }
        
        cout<<cnt;
    return 0;
    }