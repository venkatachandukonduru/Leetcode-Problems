class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        x = Counter(s1)
        for i in range(len(s2)-len(s1)+1):
            y = Counter(s2[i:i+len(s1)])
            if x == y :
                return True