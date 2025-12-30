   
#include<iostream>


using namespace std;
void ccol(int col,int i,int j,int x[100][100],int y[100][100]){
  if(j==col)return;
 cout<<x[i][j]+y[i][j]<<" ";
 ccol(col,i,j+1,x,y);
}  
void rrow(int i,int row,int col,int x[100][100],int y[100][100]){
  if(i==row)return;
    ccol(col,i,0,x, y);
    cout<<"\n";
    rrow(i+1,row,col,x,y);
}

int main(){
  int row ,col;
  cin>>row>>col;
  int a[100][100],b[100][100];
 for (int i = 0; i < row; i++)
 {
    for (int j = 0; j < col; j++)
    {
        cin>>a[i][j];
    }
    
 }
  for (int i = 0; i < row; i++)
 {
    for (int j = 0; j < col; j++)
    {
        cin>>b[i][j];
    }
    
 }
 rrow(0,row,col,a,b);
}