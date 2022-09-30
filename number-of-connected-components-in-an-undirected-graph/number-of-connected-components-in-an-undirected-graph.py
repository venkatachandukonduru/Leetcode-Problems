class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        #Quick Union
        root = [x for x in range(n)]
        def find(x):
            while root[x] != x:
                x = root[x]
            return x
            
        def union(x,y):
            a,b = find(x),find(y)
            if a!=b:
                root[b] = a
        
        for i in edges:
            union(i[0],i[1])
            
        for j in range(n):
            root[j] = find(j)
        
        return len(set(root))


#         #Quick Find
#         root = [x for x in range(n)]
#         def find(x):
#             return root[x]
        
#         def union(x,y):
#             a,b = find(x), find(y)
#             if find(x) != find(y):
#                 for i in range(len(root)):
#                     if root[i] == b:
#                         root[i] = a
                        
#         for i in edges:
#             union(i[0],i[1])
        
#         #print(root)
#         return len(set(root))