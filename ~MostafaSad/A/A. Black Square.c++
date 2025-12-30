#include <iostream>
#include <string>
using namespace std;

int main()
{
   int arr[4],res=0,index;
   string s;

   for (int i = 1; i <= 4; i++)
   {
    cin>> arr[i];
   }
   cin>>s;
   
for (int i = 0; i <s.length() ; i++)
{
   index=s[i]-'0';
   /*orindex=s[i]-'1';if start from arr[0] */
   
    res+=arr[index];
   //cout<<"s value:"<<s[i]<<" "<<'\n'<<"arr value:"<<arr[index];
   
}
     cout<<res;

    return 0;
}
