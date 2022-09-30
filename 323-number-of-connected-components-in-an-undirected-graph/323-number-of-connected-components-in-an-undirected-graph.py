class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        root = [x for x in range(n)]
        def find(x):
            return root[x]
        
        def union(x,y):
            a,b = find(x), find(y)
            if find(x) != find(y):
                for i in range(len(root)):
                    if root[i] == b:
                        root[i] = a
                        
        for i in edges:
            union(i[0],i[1])
        
        print(root)
        return len(set(root))