#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;



void solve(){
    
    string line;
    while (getline(cin, line)) {
        if (line == "0") break;
        stringstream ss(line); 

        int p,e;ll res=1;
        while (ss >> p >> e) { 
        
       
            res*=(ll)pow(p,e);
        }

        res--;
        map<ll,int,greater<int> >mp;
        for(int i=2;i*i<=res;i++){

            if(res%i==0){
                while (res%i==0)mp[i]++,res/=i;
        
            }
            
        }
        if(res>1)mp[res]++;

         bool first = true;
        for (auto &[prime, exp] : mp) {
            if (!first) cout << " ";
            cout << prime << " " << exp;
            first = false;
         }
        
         cout << "\n";

    }
    
}


int main (){

     //txt 
    HAMED
    solve();
    return 0;
}