class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if len(p)>len(s) : return []
        n,hash_map1,hash_map2,res = len(p),defaultdict(int),defaultdict(int),[]
        for i in range(n): hash_map1[p[i]]+=1
        for i in range(n-1): hash_map2[s[i]]+=1
        for i in range(n-1,len(s)):
            hash_map2[s[i]]+=1
            if(hash_map1==hash_map2): res.append(i-n+1)
            if(hash_map2[s[i-n+1]]>1): hash_map2[s[i-n+1]]-=1
            else : del hash_map2[s[i-n+1]]
        return res
    '''
        if len(s) < len(p) : 
            return []
        
        res = []
        pDict = defaultdict(int)
        sDict = defaultdict(int)

        for i in p : pDict[i] += 1
        for i in s[:len(p)-1] : sDict[i] += 1
        
        for i in range(len(p)-1, len(s)) : 
            sDict[s[i]] += 1
            if sDict == pDict : 
                res.append(i-len(p)+1)
            sDict[s[i-len(p)+1]] -= 1
            if sDict[s[i-len(p)+1]] == 0 : 
                del sDict[s[i-len(p)+1]]
            
        return res
    
    """class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        
        """
        """
        n,hash_map1,res = len(p),defaultdict(int),[]
        for i in range(len(p)):
            hash_map1[p[i]]+=1
        hash_map3 = dict.fromkeys(hash_map1,0)
        
        for i in range(len(s)-n+1):
            #hash_map2 = hash_map1.copy()
            hash_map2 = hash_map1.copy()
            for j in range(i,i+n):
                hash_map2[s[j]]-=1
            if(hash_map3==hash_map2):
                res.append(i)
        return res
        """
        
        """n,hash_map1,res = len(p),defaultdict(int),[]
        for i in range(len(p)):
            hash_map1[p[i]]+=1
    
        for i in range(len(s)-n+1):
            #hash_map2 = hash_map1.copy()
            hash_map2 = defaultdict(int)
            for j in range(i,i+n):
                hash_map2[s[j]]+=1
            if(hash_map1==hash_map2):
                res.append(i)
            #print(hash_map2,"---->",list(hash_map2.keys()))
            #if (list(hash_map2.values()).count(0))==n and sum(list(hash_map2.values()))==0:
                #res.append(i)
        return res
        """
        
        '''"""
        n,res = len(p),[]
        p = ''.join(sorted(p))
        for i in range(len(s)):
            j = s[i:i+n]
            if ''.join(sorted(j))==p:
                res.append(i)
        return res
        '''"""
                