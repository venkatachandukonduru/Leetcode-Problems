class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        #Method 1:
        for i in nums[::-1] :
            if nums.count(i)>len(nums)//2 : return i
        #Method 2
        # nums.sort()
        # return nums[len(nums)//2]