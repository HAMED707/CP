    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
      int n;
      cin>>n;
      int wires[n];
      for(int i=0;i<n;i++)cin>>wires[i];
      int x,y,cnt;cin>>cnt;
      while (cnt--)
      {
        cin>>x>>y;
        int pos=x-1;
        if(x-1!=-1||x+1!=n){
            //cout<<wires[x]<<endl;
            wires[pos-1]+=y-1;
            wires[pos+1]+=wires[pos]-y;
            //cout<<wires[x]<<endl;
            
            }
            wires[pos]=0;
      }
      for(int i=0;i<n;i++)cout<<wires[i]<<endl;
      
    return 0;
    }