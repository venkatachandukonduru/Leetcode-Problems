class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        for j in nums:
            if i<2 or nums[i-2]!=j: nums[i],i = j,i+1
        return i
            