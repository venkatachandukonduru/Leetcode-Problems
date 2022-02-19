class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        #Method 2
        p = [x for x in p]
        s = s.split(" ")
        if len(p)!=len(s) : return False
        return True if len((set(zip(p,s)))) == min(len(set(p)),len(set(s))) else False
    
        '''
        #Method1
        p = [x for x in p]
        s = s.split(" ")
        if len(p) != len(s) : return False
        dic1 = {}
        for i in range(len(p)):
            if dic1.get(p[i],None)!=s[i]:
                if dic1.get(p[i],None) == None : dic1[p[i]] = s[i]
                else : return False
        for r,t in dic1.items():
            dic1[r] = 9
            if t in dic1.values() : return False
        print(p,s,dic1)
        return True
        '''