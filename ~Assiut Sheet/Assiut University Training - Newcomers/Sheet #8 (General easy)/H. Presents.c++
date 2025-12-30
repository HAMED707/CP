//////////////////////////////////////((((((((((((((((((((((((frequency array c++))))))))))))))))))))))))

#include <iostream>
#include <vector>
  
using namespace std;


int main() {
    int arr[1001];
    int fri,x;
    cin>>fri;
    for (int i = 1; i <= fri; i++)
    { cin>>x;
        arr[x]=i;
    }
    for (int i = 1; i <= fri; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}