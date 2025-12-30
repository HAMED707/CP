#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
//
// void solve(){
//     string s;
//     while (cin>>s) {
//         deque<string>dq;
//         bool r=1;
//         string t="";
//         for (auto& i:s) {
//
//             if(i!=']' and i!='[')t+=i;
//
//             if(i=='[') {
//                 if(r)dq.push_back(t);
//                 else dq.push_front(t);
//                 r=0;
//                 t="";
//             }
//
//             else if(i==']') {
//                 if(r)dq.push_back(t);
//                 else dq.push_front(t);
//                 r=1;
//                 t="";
//             }
//
//         }
//         if(t!="") {
//             if(r)dq.push_back(t);
//             else dq.push_front(t);
//         }
//         for (auto& i:dq)cout<<i;
//         cout<<'\n';
//     }
// }

void solve(){
    string s;
    while (cin>>s) {
        deque<string>dq;
        bool r=1;
        string t="";
        for (auto& i:s) {

            if(i!=']' and i!='[')t+=i;

            if(i=='[' or i==']') {
                if(r)dq.push_back(t);
                else dq.push_front(t);
                r=!r;
                t="";
            }


        }
        if(t!="") {
            if(r)dq.push_back(t);
            else dq.push_front(t);
        }
        for (auto& i:dq)cout<<i;
        cout<<'\n';
    }
}


int main (){

    // txt
    HAMED
    solve();
    return 0;
}