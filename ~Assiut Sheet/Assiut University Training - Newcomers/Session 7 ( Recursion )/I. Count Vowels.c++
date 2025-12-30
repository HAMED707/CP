#include<iostream>
#include<string>
using namespace std;
int cnt=0;
int countVowel(string s,int i,int size){
    if(i==size)return cnt;
    if(s[i]<'a') s[i]+=('a'-'A');
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')cnt++;
   return countVowel(s,i+1,size);
}
int main(){
  string x;
  getline(cin,x);
  int size=x.size();
   cout<< countVowel(x,0,size);
  
}