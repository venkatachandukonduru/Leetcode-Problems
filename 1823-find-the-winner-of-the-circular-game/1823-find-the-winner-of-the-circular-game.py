class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        res = [ i for i in range(1,n+1)]
        h = 0
        while len(res)!=1:
            h+=(k-1)
            h%=len(res)
            del res[h]
        return res[0]