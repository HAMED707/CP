
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
    
//         string v,s;
//         cin>>v>>s;
//         int flag=0;
//         int vv=v.size();
//         int ss=s.size();
//         int n = min(vv,ss);
        
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i]<s[i])
//             {
//                 cout<<v<<endl;
//                 break;
//             }
//             else if(s[i]<v[i]){
//                 cout<<s<<endl;
//                 break;
//             }else{
//                 flag++;
//             }
            
//         }
//         if(flag==1){
//             if (vv>ss)
//             {
//                 cout<<s<<endl;
//             } else{
//                 cout<<v<<endl;
//             }
            
//         }
        
//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;
int main() {

        string v,s;
        cin>>v>>s;
        cout<<min(v,s)<<endl;
        return 0;

}