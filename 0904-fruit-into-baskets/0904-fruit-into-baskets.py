class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        d1 = {}
        res = 0
        for j,i in enumerate(fruits):
            if i in d1 or len(d1)<2:
                if i not in d1 : d1[i] = 1
                else : d1[i]+=1
            else:
                res = max(res,sum(d1.values()))
                #print(d1)
                h1 = {}
                h1[i] = 1
                prev = fruits[j-1]
                cnt = 0
                for u in range(j-1,-1,-1):
                    if fruits[u] == prev: cnt+=1
                    else: break
                
                h1[prev] = cnt
                # h1[i] = 1
                d1 = h1
        #print(d1)
        return max(res,sum(d1.values()))