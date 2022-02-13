class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        temp2 = set()
        res = [[]]
        for i in nums: res+=[r+[i] for r in res]
        for i in res: temp2.add(str(i))
        val = []
        for i in temp2: val.append([j for j in (i[1:-1].split(', '))])
        return val
    
    
        '''
        #val.append([int(float((''.join(filter(str.isdigit,j))))) for j in (i[1:-1].split(', '))])
        #return [list(i) for i in temp2]
        '''
        '''
        
        temp1 = set()
        tuple1 = tuple()
        for i in res:
            tuple1+=(i)
        print(tuple1)
        for i in res:
            temp1.add(tuple(set(i)))
        print(temp1)
        return list(map(set,res))
        '''
        