class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        res = [ i for i in range(1,n+1)]
        #print(res)
        h = 0
        while len(res)!=1:
            j = k % len(res)
            j-=1
            h+= j
            h%=len(res)
            if h == -1:
                del res[-1]
            else:
                del res[h]
            print(res)
        return res[0]