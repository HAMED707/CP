    #include<iostream>
    #include<algorithm>
    using namespace std;
    void solve(){
    string s, t, l, r;
    cin >> s;
    int p = s.find('|');
    l = s.substr(0, p);
    r = s.substr(p + 1);
    cin >> t;
    for (auto c : t){
        if (l.size() <= r.size()){
            l += c;
        }
        else{
            r += c;
        }
    }
    if (l.size() == r.size()){
        cout << l << "|" << r;
    }
    else {
        cout << "Impossible";
    }
}
    
    int main(){
        solve();
    return 0;
    }