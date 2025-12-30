#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;

void solve() {
    int n;cin>>n;
    vector<int>v(n);
    for (auto& i:v)cin>>i;

    stack<int> st;
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && v[st.top()]>=v[i]) {
            st.pop();
        }

        if (st.empty()) {
            result[i] = 0;
        } else {
            result[i] = st.top() + 1;
        }

        st.push(i);
    }

    for (int i=0;i<n;i++) {
        cout << result[i] << " ";
    }


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}