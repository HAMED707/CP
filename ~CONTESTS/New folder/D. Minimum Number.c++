
        #include<iostream>
    using namespace std;
    int main(){
        string x;cin>>x;
        cout<<(10-((x[x.size()-1]-'0')%10))%10;
    return 0;
    }