#include <iostream>
#include <vector>
  
using namespace std;


int main() {
    int row,col;
    bool flag = true; 
    cin>>row>>col;
    for (int i = 0; i <row; i++){
            if(i%2==0){
             cout<<string(col,'#')<<"\n";
            }else if(flag){
                cout<<string(col-1,'.')<<"#\n";
                flag=false;              
            }else { cout<<'#'<<string(col-1,'.')<<"\n";flag=true;}
            }
    

    return 0;
}