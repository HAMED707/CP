#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

void solution_1(int n){

    for (int i = 2; i <=n; i++)
    {
        double x=log(n)/log(i);
        int tmp=x;

        if(x-tmp==0)return void(cout<<tmp<<'\n');
    }
    
}

void solution_2(int n){

      int cnt_n=0,power=0;

    for (int i = 2; i*i <= n && cnt_n<=1; i++)
    {
        if(n%i==0){
            cnt_n++;

            while(n%i==0){
                n/=i;
                power++;
            }
        }
    }
    if(n>1)power++;

    cout<<power<<'\n';

    
}

void solution_3(int n){

    for(double i=32;i>=1;i--){

        double root = pow((double)n,1/i);

        int res=round(root);


        //cout<<"i: "<<i<<" root::"<<root<<" "<< " res: "<<res<<'\n';

        if(res==root)
            return void(cout<<i<<'\n');
    }

}

void solve(int n){
    
    solution_3(n);
    
}


int main (){

   // txt
    HAMED
    int n;
    while (true)
    {
        cin>>n;
        if(!n)break;
        solve(n);
    }
    
    return 0;
}