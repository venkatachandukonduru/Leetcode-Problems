class Solution:
    def compress(self, chars: List[str]) -> int:
        p = "".join(chars)
        res = ""
        count = 0
        for i,j in enumerate(p[:-1]):
            if p[i]==p[i+1]: count+=1
            else:
                if count ==0: res+=j
                else:
                    res+=j+str(count+1)
                count = 0
        if count: res+=p[-1]+str(count+1)
        else : res+=p[-1]
        for x in range(len(res)):
            chars[x] = res[x]
        return len(res)
        