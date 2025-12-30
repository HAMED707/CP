#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    string s1,s2,s3;cin>>s1>>s2>>s3;
    stack<char>m,a,r;
    for (int i=s1.size()-1;i>=0;i--)m.push(s1[i]);
    for (int i=s2.size()-1;i>=0;i--)a.push(s2[i]);
    for (int i=s3.size()-1;i>=0;i--)r.push(s3[i]);


        char o='m';
    while (true) {

        if(o=='m') {
            if(!m.empty()) {
            o=m.top();
            m.pop();
            }else {
                cout<<"M";
                break;
            }
        }
        else if(o=='a') {
            if(!a.empty()) {
            o=a.top();
            a.pop();
            }else {
                cout<<"A";
                break;
            }
        }
        else{
            if(!r.empty()) {
            o=r.top();
            r.pop();
            }else {
                cout<<"R";
                break;
            }

        }

    }

}

int main (){

    //   txt
    HAMED
    solve();
    return 0;
}