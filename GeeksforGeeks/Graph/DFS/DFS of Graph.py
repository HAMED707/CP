class Solution:
    def dfs(self, adj):
        V = len(adj)
        visited = [False] * V
        res = []

        def dfsRec(s):
            visited[s] = True
            res.append(s)

            for i in adj[s]:
                if not visited[i]:
                    dfsRec(i)

        dfsRec(0)
        return res
