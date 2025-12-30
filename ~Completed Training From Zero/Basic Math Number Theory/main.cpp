#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000
using namespace std;
    // a way  to calc exponantiol on log n Time (binary exponentiation)
/// i can use also on associative operations 2 + 2 + 2 + 2 + 2 sum os certain num in certain times
// int bExp(int a,int b) {
//     int ans=1;
//     while (b) {
//         if(b%2==1) {
//             ans*=a;
//             ans%=MOD;//owerflow avoiding
//         }
//         //cout<<b<<" "<<ans<<" "<<a<<endl;
//         a*=a;
//         a%=MOD;//owerflow avoiding
//         b/=2;
//     }
//     return ans;
// }

// GCD some notes so GCD(10,32)==GCD(10,22(b-a))
/*
 * 1- Originally, the Euclidean algorithm was formulated
    as follows: subtract the smaller number from the larger one until one of the numbers is zero.
 * 2-   gcd (a, b)==gcd (b, a % b)
*/
// void GCD(int a,int b) { O(log(n))
//     while (b) {
//         a%=b;
//         swap(a,b);
//     }
//     cout<< a;
// }
// recurcive
int GCD(int a,int b) { //O(log(n))
    if(b==0) {
       return a;
    }
    return GCD(b , a%b);
}
// LCM 15 25
// 3*5 5*5 remove commen factor(GCD=>5)==3*5*5==75
void LCM(int a,int b) { //O(log(n))
   cout<<(a*b)/GCD(a,b);
}
// other way solve GCD it is Middle school approche
// prime factores for each number
// ex: 12 24  => 2*2*3 , 2*2*2*3 so the GCD =2*2*3 == 12

// void GCD(int a,int b) {
//     vector<int>first,second;
//     for (int i=2;i<=a;i++) {
//         while(a%i==0) {
//             a/=i;
//             cout<<i<<" ";
//             first.emplace_back(i);
//         }
//     }
//     cout<<endl;
//     map<int ,int >freq;
//     for (int i=2;i<=b;i++) {
//         while(b%i==0) {
//             b/=i;
//             cout<<i<<" ";
//             freq[i]++;
//             second.emplace_back(i);
//         }
//     }
//     int ans=1;
//     for(auto& i:first) {
//         if(freq[i]) {
//             ans*=i;
//             freq[i]--;
//         }
//     }
//     cout<<endl<<ans;
// }

// sieve of eratosthenes
// is a faster way to get prime number O(nlog(log(n))
void sieve(int x) {
    vector<bool> isprime(x+1,true);
    isprime[0]=false;
    isprime[1]=false;

    for (int i=2;i*i<=x;i++) {
        if(isprime[i]) {
            for (int j=i*i;j<=x;j+=i) {
                    isprime[j]=false;
            }
        }
    }

    for (int i=1    ;i<=x;i++) {

        if(isprime[i])cout<<i<<" ";
    }
}
int main() {
    int a,b;cin>>a;
   // cout<<bExp(a,b);
    sieve(a);
    return 0;
}
