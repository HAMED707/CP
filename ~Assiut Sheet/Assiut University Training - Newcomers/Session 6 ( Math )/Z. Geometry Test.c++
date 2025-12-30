#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {  
 
 
    double red,side;
    cin>>red>>side;
    if (red*2<=side)cout<<"Square";
    else if(side*side<=red*red*2)cout<<"Circle";
    else cout<<"Complex";

    return 0;
}   