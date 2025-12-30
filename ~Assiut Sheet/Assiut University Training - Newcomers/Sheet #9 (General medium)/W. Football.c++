#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#define HAMED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define testcases int x;cin>>x;cin.ignore();while(x--)
using namespace std;
int main()
{
    string s;
    vector<string>vs;
    map<string,int>freq;
    
    HAMED
    testcases{
       cin>>s; 
       vs.push_back(s);
    }
    for (int i = 0; i < vs.size(); i++)
    {
        if(freq.find(vs[i])==freq.end()){
            freq[vs[i]]=0;
        }
        freq[vs[i]]++;
    }
    string mostFrequentString;
    int maxFrequency = 0;
    for (auto itr=freq.begin(); itr!=freq.end(); itr++)
    {
          if (itr->second > maxFrequency) {
            maxFrequency = itr->second;
            mostFrequentString = itr->first;
        } 

    }
    cout<<mostFrequentString;
    
      return 0;
}



