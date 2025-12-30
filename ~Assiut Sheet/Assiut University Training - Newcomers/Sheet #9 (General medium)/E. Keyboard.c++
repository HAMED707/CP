    #include<iostream>

    using namespace std;
    int main(){
        string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
        string dir,s;
        cin>>dir>>s;
        int pos;
        for (int i = 0; i < s.size(); i++)
        {
            pos=keyboard.find(s[i]);
            if(dir=="R")cout<<keyboard[pos-1];
            else cout<<keyboard[pos+1];
        }

        
    return 0;
    }