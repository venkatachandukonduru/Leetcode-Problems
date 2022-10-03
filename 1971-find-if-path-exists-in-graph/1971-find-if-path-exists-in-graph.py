class Solution:
    def validPath(self, n: int, edges: List[List[int]], src: int, dest: int) -> bool:
        
        #Quick Union
        root = [x for x in range(n)]
        
        def find(x):
            while root[x] != x: x = root[x]
            return x
        
        def union(x,y):
            a,b = find(x),find(y)
            if a!=b:
                root[b] = a
        
        for i in edges:
            union(i[0],i[1])
        
        if find(src) == find(dest) :
            return True
        else:
            return False
            
        
#         Quick Find Algorithm
#         root = [x for x in range(n)]
        
#         def find(x):
#             return root[x]
        
#         def union(a,b):
#             x = root[a]
#             y = root[b]
#             if x!=y:
#                 for i in range(len(root)):
#                     if root[i] == y:
#                         root[i] = x
        
#         for i in edges:
#             union(i[0],i[1])
        
#         if root[src] == root[dest] :
#             return True
#         else:
#             return False
                        
        
#     def validPath(self, n: int, edges: List[List[int]], src: int, dest: int) -> bool:
#         root = [x for x in range(n)]
#         def find(x):
#             return root[x]
#             # if root[x]==x: return x
#             # else : return find(root[x])
        
#         def union(x,y):
#             if find(x)==find(y): return
#             else:
#                 z = find(x)
#                 for i in range(n):
#                     if root[i] == y:
#                         root[i] = z
#         for i in edges:
#             union(i[0],i[1])
#             union(i[1],i[0])
        
#         print(root)
#         return True if find(root[src])==find(root[dest]) else False