class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        s = defaultdict(list)
        if n==1 : return 1
        if not trust : return -1
        for i in trust: s[i[0]].append(i[1])
        if len(s) == n : return -1
        
        s1 = defaultdict(int)
        h = [ x for y in s.values() for x in y]
        h1 = Counter(h)
        a = h1.most_common(1)
        if a[0][1] != n-1: return -1
        else : return a[0][0]
        
        
        
#         for i in s.values():
            
#         sum1 = (n*(n+1)) // 2
#         return sum1 - sum(s.keys())
        
                
                
        