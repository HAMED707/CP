#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()

using namespace std;
const int N=1e5+5;

int largPrime(long long n) {
    if (n <= 1) return -1;

    int ans = 1;

    while (n % 2 == 0) {
        ans = 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            ans = i;
            n /= i;
        }
    }


    if (n > 2) ans = n;

    return ans;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;


    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isSquare(int n) {

    int x = sqrt(n);
    return (x * x == n);
}

bool isSorted(deque<int>& dq,int n,vector<int>& sorted) {

    for (int i=0;i<n;i++) {
        if(sorted[i]!=dq[i])return 0;
    }return 1;
}
void solve(){

    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<int>miss;
    int current = 1;
    int total_cost = 0;

    while (true) {
        if (st.find(current) == st.end()) {

            if (total_cost + current > m) break;

            miss.push_back(current);
            total_cost += current;
        }
        current++;
    }

    cout << miss.size() << '\n';
    for (int i : miss) cout << i << ' ';

}







int main (){

   // txt
    HAMED
    solve();
    return 0;
}