    #include<iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    int main(){
      int row,col,stars=0;
      cin>>row>>col;
      char arr[row][col];
      for (int i = 0; i < row; i++)
      {for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }}
         for (int i = 0; i < row; i++)
      {for (int j = 0; j < col; j++)
        {
            if(arr[i][j]=='*')stars++;
        }}
        cout<<stars;
        int k=0;
        vector<int>xrow,ycol,sz;
       for (int i = 1; i < row - 1; i++) {
        for (int j = 1; j < col - 1; j++) {
            if (arr[i][j] == '*' &&
                arr[i - 1][j] == '*' &&
                arr[i + 1][j] == '*' &&
                arr[i][j - 1] == '*' &&
                arr[i][j + 1] == '*') {

                int size = 0;
                int top = i - 1, bottom = i + 1, left = j - 1, right = j + 1;

                while (top >= 0 && bottom < row && left >= 0 && right < col &&
                       arr[top][j] == '*' && arr[bottom][j] == '*' &&
                       arr[i][left] == '*' && arr[i][right] == '*') {
                    size++;
                    top--;
                    bottom++;
                    left--;
                    right++;

                 k++;
                xrow.push_back(i + 1);
                ycol.push_back(j + 1);
                sz.push_back(size);
                }

               
            }
        }
    }

    if (k == 0) {
        cout << "-1" << endl;
    } else {
        cout << k << endl;
        for (int i = 0; i < k; i++) {
            cout << xrow[i] << " " << ycol[i] << " " << sz[i] << endl;
        }
    }
      
    return 0;
    }