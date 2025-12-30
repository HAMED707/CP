
        #include<iostream>
    using namespace std;
    
    int main(){
        int x;cin>>x;
        int cnt=0;
       
           for (int i = 0; i * 3 <= x; i++) {
            int j = x - 3 * i;
                if (j % 2 == 0)cnt++; 
                    
                
    }
    
        cout<<cnt;
    return 0;
    }