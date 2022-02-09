class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        z = set()
        for i,j in enumerate(nums[:-1]):
            if nums[i]+k in nums[i+1:]:
                z.add((max(j,j+k),min(j,j+k)))
            if nums[i]-k in nums[i+1:]:
                z.add((max(j,j-k),min(j,j-k)))
        return len(z)
        '''
        z = set()
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if abs(nums[i]-nums[j])==k:
                    z.add((max(nums[i],nums[j]),min(nums[i],nums[j])))
        return len(z)
        '''