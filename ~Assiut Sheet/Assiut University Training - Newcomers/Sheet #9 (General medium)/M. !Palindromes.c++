    #include<iostream>
    #include<algorithm>
    using namespace std;
    int arr[123]={0};
    bool palindromes(string s){
      int sz=s.size();
      for (int i = 0; i < sz/2; i++)
      {
        if(s[i]!=s[sz-i-1]){return false;}
      }
      return true;
      
    }
    int main(){
      string s;
      cin>>s;
      int sz=s.size(),ans=0;
      if(palindromes(s)){
        for (int i = 0; i < sz; i++)
        {
          arr[s[i]]++;
        }
        for (int i = 'a'; i <='z'; i++)
        {
          if(arr[i]>0)ans++; // this all just to avoid this ex-> aaaaa
        }
       if(ans==1)cout<<0;
       else cout<<sz-1; // make any palindrome not palindrom by -1
      }else cout<<s.size();
    return 0;
    }