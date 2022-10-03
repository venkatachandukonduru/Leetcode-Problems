class Solution(object):
    def generateParenthesis(self, n):
        res,temp =set(),["()"]
        for i in range(2,n+1):
            for x in temp:
                for i in range(len(x)):
                    res.add(x[:i]+"()"+x[i:])
                    # print(x[:i]+"()"+x[i+1:])
            temp = [x for x in res]
            res.clear()
        return temp
                
        
#         #Brute Force
#         #Didnt Understand! Look Again
#         def generate(A = []):
#             if len(A) == 2*n:
#                 if valid(A):
#                     ans.append("".join(A))
#             else:
#                 A.append('(')
#                 generate(A)
#                 A.pop()
#                 A.append(')')
#                 generate(A)
#                 A.pop()
#                 print(A)
#         def valid(A):
#             bal = 0
#             for c in A:
#                 if c == '(': bal += 1
#                 else: bal -= 1
#                 if bal < 0: return False
#             return bal == 0

#         ans = []
#         generate()
#         return ans

# class Solution:
#     def generateParenthesis(self, n: int) -> List[str]:
#         res = []
#         def add_par(temp,m,n,p):
#             if n > m or m>p/2 or n>p/2: return
#             if len(temp) == p: res.append(temp)
            
#             add_par(temp+'(',m+1,n,p)
#             add_par(temp+')',m,n+1,p)
        
#         p = n*2
#         add_par("",0,0,p)
#         return res
            