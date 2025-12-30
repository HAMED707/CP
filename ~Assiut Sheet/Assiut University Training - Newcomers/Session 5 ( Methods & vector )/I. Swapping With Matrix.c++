#include<iostream>
#include<vector>



using namespace std;
void SwappingMatrix(int size,int x,int y,vector<vector<int>>&v){
   
    for (int i =0; i <size; i++)
{ 
       int temp = v[x][i];
        v[x][i] = v[y][i];
        v[y][i] = temp;
}

    for (int i = 0; i <size; i++)
{ 
        int temp = v[i][x];
        v[i][x] = v[i][y];
        v[i][y] = temp;;
}
}

int main(){
     int cnt,x,y;
    cin>>cnt>>x>>y;
    vector<vector<int>>v(cnt,vector<int>(cnt));
    x--; y--;

for (int i = 0; i <cnt; i++)
{
    for (int j = 0; j <cnt; j++)
    {
       cin>>v[i][j];
    }
    
}
SwappingMatrix(cnt,x,y,v);
for (int i = 0; i < cnt; i++)
{
    for (int j = 0; j < cnt; j++)
    {
       cout<<v[i][j]<<" ";
    }
    cout << endl;
}
return 0;
}