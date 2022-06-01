class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        z1 = defaultdict(set)
        z2= defaultdict(set)
        for i in range(len(s)):
            z1[s[i]].add(t[i])
            z2[t[i]].add(s[i])
            if len(z1[s[i]]) > 1 or len(z2[t[i]]) > 1 : return False
        return True