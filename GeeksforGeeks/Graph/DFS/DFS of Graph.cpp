class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<bool>visited(V,false);
        
        vector<int>res;
        
        function<void(int)>dfsRec=[&](int s){
            visited[s]=true;
            res.push_back(s);
            
            for(auto &i: adj[s]){
                if(!visited[i])
                    dfsRec(i);
            }
        };
        
        dfsRec(0);
        return res;
        
    }
};