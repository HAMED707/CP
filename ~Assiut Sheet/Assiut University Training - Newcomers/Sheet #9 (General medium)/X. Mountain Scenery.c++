#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
//     int n,k,sz;cin>>n>>k;
//     sz=2*n+1;
//     vector<pair<int,int>>arr(sz);
    
//     for(int i=0;i<sz;i++){cin>>arr[i].first;arr[i].second=i;}

//     sort(arr.begin(),arr.end());
   
//         int i=sz-1;
        
//     while (k--)
//     {
//        if(arr[i].second%2!=0){
//       arr[i].first--;
        
//        }else k++;
//         i--;
//     }


// //  for(int i=0;i<sz;i++){cout<<arr[i].first<<" ";}  
// //       cout<<endl;
// //       for(int i=0;i<sz;i++){cout<<arr[i].second<<" ";}  
// //       cout<<endl;

// vector<int> result(sz);
//     for (int i = 0; i < sz; i++) {
//         result[arr[i].second] = arr[i].first;
//     }

    
//     for (int i = 0; i < sz; i++) {
//         cout << result[i] << " ";
//     }



int n,k;
                cin>>n>>k;
                n=n*2+1;
                vector<int>a(n);
                for(int i=0;i<n;i++)
                {
                    cin>>a[i];
                }
                for(int i=1;i<n;i+=2)
                {
                    if(a[i]-1>a[i-1]&&a[i]-1>a[i+1])
                    {
                        a[i]--;
                        k--;
                        if(!k)
                        {
                            break;
                        }
                    }
                }
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
    return 0;
}
//The issue with the line cout << arr[arr[i].second].first << " "; is that  
//it uses arr[i].second as an index to access the value in the modified array arr,
// but the array arr itself has been sorted and modified, which means arr[arr[i].second].
//first might not correspond to the original values and their correct positions.