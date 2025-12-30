    #include<iostream>
    using namespace std;
    typedef long long ll;
    int main(){
        ll n;cin>>n;
        ll odd=(n+1)/2;ll even=n/2;
        ll odds=odd*odd;
        ll evens=even*even+even;
        cout<<-1*odds+evens;
    return 0;
    }