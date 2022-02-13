class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        #nums = list(set(nums))
        res = [[]]
        for j in nums:
            res.extend([r+[j] for r in res])
        return res
        '''
        nums = list(set(nums))
        print(nums)
        temp = [[]]
        temp+=[nums[i:j] for i in range(len(nums)) for j in range(i+1,len(nums)+1)]
        print(temp)
        '''