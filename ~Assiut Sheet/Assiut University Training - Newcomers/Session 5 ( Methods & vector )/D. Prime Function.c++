#include<iostream>
#include<math.h>
#include<vector>

using namespace std;
void prime(int x) {
    if (x <= 1) {
        cout << "NO" << endl;  
        return;
    }
    if (x == 2) {
        cout << "YES" << endl;  
        return;
    }
    if (x % 2 == 0) {
        cout << "NO" << endl;  
        return;
    }

    int sqrtX = sqrt(x);
    for (int i = 3; i <= sqrtX; i += 2) {
        if (x % i == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    int counter,x;
    cin>>counter;
while (counter--)
{
   cin>>x;
   prime(x);
}

return 0;
}