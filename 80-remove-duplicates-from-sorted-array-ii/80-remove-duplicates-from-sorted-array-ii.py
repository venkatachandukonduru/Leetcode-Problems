class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)<3:
            return len(nums)
        i = 2
        z = len(nums)
        while i<len(nums):
            if nums[i]==nums[i-1] and nums[i-1] ==nums[i-2]:
                print(i)
                z-=1
                del nums[i]
            else: i+=1
        return len(nums)
            