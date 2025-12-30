#include<iostream>
#include<vector>
using namespace std;
pair<int,int>  solve(vector<int>&arr){
    int serj=0,dima=0,turn=0;
    
    for (int i = 0; i < arr.size();)
    {

        int sz=arr.size();
        int max_pos=(arr.front() > arr.back()?0:(sz-1));
        
        if(turn%2==0){serj+=arr[max_pos]; arr.erase(arr.begin()+max_pos); }
        else {dima+=arr[max_pos]; arr.erase(arr.begin()+max_pos); }
        turn++;
    }   
 return make_pair(serj,dima);
 
}

int main(){
    int size;
    cin>>size;
   vector<int>arr(size);
   for (int i = 0; i < size; i++)
                    {cin>>arr[i];}
pair<int,int> solution=solve(arr);
    cout<<solution.first<<" "<<solution.second;
}