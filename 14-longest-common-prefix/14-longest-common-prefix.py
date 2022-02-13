class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        count = 0
        while True:
            flag = 1
            if len(strs[0])<=len(res):
                return res
            c = strs[0][count]
            for i,j in enumerate(strs):
                if flag ==0:
                    return res
                if len(j)<=len(res):
                    return res
                if j[count]!=c:
                    flag = 0
            if flag:
                count+=1
                res+=c
            else:
                return res
                
            
            
        