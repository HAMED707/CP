        #include<iostream>
        #include<string.h>
        #include<cmath>
        using namespace std;
      
int charToValue(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    return -1; 
}


char valueToChar(int v) {
    if (v >= 0 && v <= 9) return '0' + v;
    if (v >= 10 && v <= 35) return 'A' + (v - 10);
    return '?'; 
}
        
        int basTodec(string n,int x){
            int size = n.length();
             int res=0;
            int increa=0;
            for (int i = size-1; i >=0; --i)
            {
                 int charValue = charToValue(n[i]);
            if (charValue < 0 || charValue >= x) {
            cerr << "Invalid character in the input string for the given base." << endl;
            return -1;
        }
               res+= charToValue(n[i])*pow(x,increa);
                increa++;
            }
            
        return res;
        }
        string decTobas(int n ,int x){
            if (n == 0) {
        return "0";
    }
            string result="";
            while (n>0)
            {
            int res=(n%x);
            result=valueToChar(res)+result;
            n/=x;
            
            }
            return result;
        }
        int main() {    
        int t,x;
        string n;   
        cin>>t>>n>>x;
          if (t == 1) {
        int result = basTodec(n, x);
        if (result != -1) {
            cout << result;
            }
        }
        if(t==2)cout<<decTobas(stoi(n),x);
        return 0;
        } 
