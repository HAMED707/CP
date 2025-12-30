    #include<iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    int main(){
        int cnt;cin>>cnt;
        while (cnt--)
        {int n,m ;cin>>n>>m;
        vector<int>elements;
            int arr[n][m];
            for (int i = 0; i < n; i++)
            {for (int j = 0; j < m; j++)
                {
                    cin>>arr[i][j];
                    elements.push_back(arr[i][j]);
        }}
        //sort(elements.begin(),elements.end());
        vector<vector<int>> b(n, vector<int>(m));
int index=0;
    for (int i = 0; i < n; i++)
            {for (int j = 0; j < m; j++)
                {
                    b[i][j]=elements[index++];
        }}



        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n; ++i) {
                int swap_row = (i + 1) % n;
                swap(b[i][j], b[swap_row][j]);
            }
        }
             for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                b[i][(j + 1) % m] = arr[i][j];
            }
        }

        bool valid = true;
        for (int i = 0; i < n && valid; ++i) {
            for (int j = 0; j < m && valid; ++j) {
                if (arr[i][j] == b[i][j]) {
                    valid = false;
                }
            }
        }

           if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
        }
        

        
      
      

    
    }
    return 0;
    }