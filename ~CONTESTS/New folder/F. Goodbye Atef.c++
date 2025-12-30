    #include<iostream>
typedef long long ll;
    using namespace std;
   
    int main(){
        char arr[8][8];
        for (int i = 0; i < 8; i++)
           for (int j = 0; j < 8; j++)cin>>arr[i][j];
        int atf=0,hafz=0;
        // for (int i = 0; i < 2; i++)
        //    for (int j = 0; j < 8; j++){
        //         if(arr[i][j]>=65&&arr[i][j]<=90){
        //             atf++;
        //         }
        //    }
         for (int i = 0; i < 8; i++)
           for (int j = 0; j < 8; j++){
            if(arr[i][j]>=97&&arr[i][j]<=122){
                    hafz++;
                }
            if(arr[i][j]>=65&&arr[i][j]<=90){
                    atf++;
                }
           }
           cout<<atf<<endl;
           cout<<hafz<<endl;
        cout<<(atf>hafz?"Welcome back Atef":"Goodbye Atef");
        
    return 0;
    }