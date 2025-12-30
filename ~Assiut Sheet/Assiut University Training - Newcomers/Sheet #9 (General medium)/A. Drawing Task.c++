    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<char>>canves(n,vector<char>(m,'.')); 

    while (q--)
    {
    int r1,c1,r2,c2;
    char chr;
    cin>>r1>>c1>>r2>>c2>>chr;
    
    for (int i = min(r1,r2)-1; i < max(r1,r2); i++)
    {for (int j = min(c1,c2)-1; j < max(c1,c2); j++){
        canves[i][j]=chr;
    }}
    }
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < m; j++){
        cout<<canves[i][j];
    }
    cout<<endl;
    }
    return 0;
    }