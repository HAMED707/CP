        #include<iostream>
        #include<vector>
        #include <algorithm>
     
        using namespace std;
      
        
        int main() {    
            int n;
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                 int cnt;
                 cin>>cnt;
                 
                    vector<int> bottom, left, top, right;
                
                while (cnt--)
                {
                    int x1,x2,y1,y2;
                     cin>>x1>>y1>>x2>>y2;
                    bottom.push_back(y1);
                    left.push_back(x1);
                    top.push_back(y2);
                    right.push_back(x2);
                }
                int maxbottom= *max_element(bottom.begin(), bottom.end());
                int maxleft=*max_element(left.begin(), left.end());
                int mintop=*min_element(top.begin(), top.end());
                int minright=*min_element(right.begin(), right.end());
                int ans = 0;
                if (maxbottom < mintop && maxleft < minright) {
                    ans = (mintop - maxbottom) * (minright - maxleft);
                }

                cout << "Case #" << i << ": " << ans << endl;
            }
            
            
        return 0;
        } 
