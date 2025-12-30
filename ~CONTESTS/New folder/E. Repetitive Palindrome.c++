    #include<iostream>
typedef long long ll;
    using namespace std;
    bool isPalindrom(string s){
        int sz=s.size();
        for (int i = 0; i < sz; i++)
        {
            if (s[i]!=s[sz-i-1])
            {
                return false;
            }
            
        }
        return true;
    }
    int main(){
        string s;cin>>s;ll n;cin>>n;
       cout<< (isPalindrom(s)?"YES":"NO");
    return 0;
    }