class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start,end,count = 0,0,0
        for i,j in enumerate(s):
            if start-end == 0: end+=1
            else:
                if j in s[start:end]:
                    while s[start]!=j:
                        start+=1
                    start+=1
                end+=1
            count = max(end-start,count)
        return count
                