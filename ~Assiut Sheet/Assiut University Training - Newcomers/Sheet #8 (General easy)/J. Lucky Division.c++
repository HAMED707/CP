#include <iostream>  
#include <vector>  
using namespace std;
int main() {
    int n;
    cin>>n;
    int lucky=n;
         vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
         for (int i = 0; i < luckyNumbers.size(); i++)
         {if(n%luckyNumbers[i]==0){
                cout<<"YES";
                return 0;}}
         cout<<"NO";

    return 0;
}