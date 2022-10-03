class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def add_par(temp,m,n,p):
            if n > m or m>p/2 or n>p/2: return
            if len(temp) == p: res.append(temp)
            
            add_par(temp+'(',m+1,n,p)
            add_par(temp+')',m,n+1,p)
        
        p = n*2
        add_par("",0,0,p)
        return res
            