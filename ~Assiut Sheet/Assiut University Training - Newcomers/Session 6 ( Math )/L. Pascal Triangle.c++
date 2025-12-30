        #include<iostream>
        using namespace std;
        int nCr(int n,int r){
            int ans=1;
            if(r>n-r)r=n-r;
            if(r>n)return 0;
            for (int i = 0; i < r; i++)
            {
                ans*=(n-i);
                ans/=i+1;
            }
            return ans;
        }
        int main() {    
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) //row
            {
                for (int j = 0; j <= i; j++) //column
                {
                    cout<<nCr(i,j)<<" ";
                }
                cout<<endl;
            }
            
        return 0;
        } 
