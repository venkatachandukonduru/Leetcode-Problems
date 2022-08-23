class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        end = len(graph)-1
        out = []
        def dfs(node, path):
            if end == node:
                out.append(path)
                return
            for x in graph[node]:
                dfs(x,path+[x])
                
        x = dfs(0,[0])
        return out
                