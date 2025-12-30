#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
 
int main() {    
    int col,row,col2,row2;
    cin>>row>>col;
    vector<vector<int>> x(row, vector<int>(col));
   
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>x[i][j];
        }
        
    }

    cin>>row2>>col2;

     vector<vector<int>> y(row2, vector<int>(col2));
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>y[i][j];
        }
        
    }
     vector<vector<int>> result(row, vector<int>(col2));
    for (int i = 0; i < row; i++)//2
    {
        for (int j = 0; j < col2; j++)//2
        {
            for (int z = 0; z < col; z++)//3
            {
                result[i][j]+=x[i][z]*y[z][j];
            }
            
        }
        
    }
    
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout << endl;
    }
return 0;
} 
