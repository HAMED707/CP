#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e8;

bool almostPrimeTest(int num)
{
    int cnt=0;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            //cout<<num<<' '<<i<<" "<<cnt<<" ";
            cnt++;
            while(num%i==0)
            {
                num/=i;
            }
        }
    }
    //cout<<endl;
    return cnt==2;
}

void solve() {
    int n,count=0;cin>>n;
    for(int i=6;i<=n;i++)
    {
        if(almostPrimeTest(i))count++;
    }cout<<count<<endl;

}



int main (){

   // txt
    HAMED
    solve();
    return 0;
}