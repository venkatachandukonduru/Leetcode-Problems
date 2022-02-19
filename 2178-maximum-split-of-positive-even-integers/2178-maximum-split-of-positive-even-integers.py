class Solution:
    def maximumEvenSplit(self, num: int) -> List[int]:
        if num%2 !=0 : return []
        if num == 2: return [2]
        res = []
        i = 2
        while num>i:
            res.append(i)
            num-=i
            i+=2
        if res[-1]<num: res.append(num)
        else : res[-1]+=num
        return res
        
        