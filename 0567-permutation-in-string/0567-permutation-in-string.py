class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        z = Counter(s1)
        for i in range(len(s2)-len(s1)+1):
            if Counter(s2[i:i+len(s1)]) == z : return True
        return False
        
        '''
        z = "".join(sorted(s1))
        for i in range(len(s2)-len(s1)+1):
            if "".join(sorted(s2[i:i+len(z)])) == z:return True
        return False
        '''