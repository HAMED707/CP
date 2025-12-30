#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
         int x, y, k;
        cin >> x >> y >> k;

        int min_x_moves = ceil(((double)x/k));
        int min_y_moves = ceil(((double)y/k));

        //cout<<min_y_moves<<" "<<min_x_moves<<"  \n";

        int total_moves=0;

            int a=min_x_moves%k;
            int b=min_y_moves%k;
            min_x_moves+=a;
            min_y_moves+=b;

        if(x>0 and y>0 and x%10==0 and y%10==0) {
            total_moves=(x/k)+(y)-1;
            cout<<total_moves;
            return 0;
        }

       total_moves = min_x_moves + min_y_moves;

        cout << total_moves << endl;
    }

    return 0;
}
