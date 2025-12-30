// #include<iostream>
// using namespace std;



// int main() {
//     int cnt,sum=0;
//     cin>>cnt;
//      int x,ans=0;cin>>x;int h[x];
//     while (cnt--)
//     {
       
//         for (int i = 0; i < x; i++)
//         {
//             cin>>h[i];
//         }

//     }
//         for (int i = 0; i < x; i++)
//         {
//             if(h[i]==h[x-1]&&h[i]>h[i-1]){
//                 for (int i = 0; i < x; i++)
//                 {
//                    sum+=h[i];
//                 }
//                 cout<<sum<<endl;
//                 break;
//             }
//             while (h[i]>h[i+1])
//             {
//                 if(h[i]==h[x-1])break;
//                for (int i = 0; i < x; i++)
//                {
//                     h[i]-=1;

//                }
//                ans++;
//             }
            
//         }
//         cout<<ans<<endl;
        
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;  
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];  
        }

        int max_height = *max_element(h.begin(), h.end());
        int seconds = 0;

        while (max_height > 0) {
            for (int i = 0; i < n; ++i) {
                if (i == n-1 || h[i] > h[i+1]) {
                    if (h[i] > 0) {
                        h[i]--;
                    }
                }
            }
            max_height = *max_element(h.begin(), h.end());
            ++seconds;
        }

        cout << seconds << endl;
    }

    return 0;
}
