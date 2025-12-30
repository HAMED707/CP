    #include<iostream>
    #include<algorithm>
    #include<vector>
    #define HAMED ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    using namespace std;
    int main(){
        HAMED
      int n,m,steps;cin>>n>>m>>steps;
      vector<vector<int>>mrx(n,vector<int>(m));
      for (int  i = 0; i < n; i++)
      {for (int j = 0; j < m; j++)
        {
         cin>>mrx[i][j]; 
        }}
        int arrR[n],arrC[m];
        for (int i = 0; i < n; i++)
        {
            arrR[i]=i;
        }
        for (int i = 0; i < m; i++)
        {
            arrC[i]=i;
        }
        
         char car;
         int x,y;
        while (steps--){
        cin>>car;
        cin>>x>>y;
        x--;y--;
        if(car=='g'){
            int r=arrR[x];int c=arrC[y];
            cout<<mrx[r][c]<<endl;
            }
        else if(car=='r'){
            swap(arrR[x],arrR[y]);
        } 
        else if(car=='c'){
            swap(arrC[x],arrC[y]);
        } 

    }
    //     for (int  i = 0; i < n; i++)
    //   {for (int j = 0; j < m; j++)
    //     {
    //      cout<<mrx[i][j]<<" "; 
    //     }cout<<endl;}
      
      
    return 0;
    }