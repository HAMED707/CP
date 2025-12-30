#include<iostream>
#include<vector>

using namespace std;

vector<int> toBinary(int x){
    vector<int>y;
    
        while (x>0)
        {
         int bin=x%2;
         y.push_back(bin);
            x/=2;
            }
            return y;
     
     
}
void Palindrome(vector<int>x ){
    int s=x.size(),flag=0;
    for (int i = 0; i < s/2; i++)
    {
        if (x[i]!=x[s-1-i])
        {
            cout<<"NO";
            flag++;
            break;
        }
        
    }
    if (flag==0)
    {
         cout<<"YES";
    }
    
  
    
}

int main(){
     ios::sync_with_stdio(false); 
    cin.tie(nullptr);
  int a;
  cin>>a;
  if (a%2==1)
    {
  Palindrome(toBinary(a));
    }
    else 
    cout<<"NO";
return 0;
}