class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        count = 0
        i=0
        for j in s:
            if j=='(': count+=1
            elif j==')' and count<=0 :
                s = s[:i]+s[i+1:]
                i-=1
            elif j==')' and count>0: count-=1
            i+=1
        if count!=0:
            while count:
                j = s.rindex('(')
                s = s[:j]+s[j+1:]
                count-=1
        return s
        