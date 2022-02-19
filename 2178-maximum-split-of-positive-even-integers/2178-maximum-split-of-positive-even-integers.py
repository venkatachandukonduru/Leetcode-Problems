class Solution:
    def maximumEvenSplit(self, num: int) -> List[int]:
        if num%2 !=0 : return []
        if num == 2 : return [2]
        res = []
        for x in range(2,num,2):
            if x>num : break
            res.append(x)
            num-=x
        if num>res[-1] : res.append(num)
        else : res[-1]+=num
        return res
        '''
        if num%2 !=0 : return []
        #if num == 2: return [2]
        res = []
        i = 0
        while num>i:
            res.append(i)
            num-=i
            i+=2
        if res[-1]<num: res.append(num)
        else : res[-1]+=num
        return res[1:]
        '''
        