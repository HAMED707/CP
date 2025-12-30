    #include<iostream>
    using namespace std;
    int main(){
        int n,m,c=0;
        cin>>n>>m;
        if(m>n)cout<<"-1";
        else if(m==n)cout<<n;
        else{
            if(n%2==0)c=n/2;
            else c=(n/2)+1;
            while(c%m!=0)c++;
            cout<<c;
        }
    return 0;
    }