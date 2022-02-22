class Solution:
    def titleToNumber(self, ct: str) -> int:
        res = 0
        for i,j in enumerate(ct[:-1],1):
            res+= (26**(len(ct)-i)) * (ord(j)-ord('A')+1)
        res+=ord(ct[-1])-ord('A')+1
        return res
            