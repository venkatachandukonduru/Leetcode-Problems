class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        cnt = res = 0
        for i in range(len(nums)-2):
            if nums[i]-nums[i+1]==nums[i+1]-nums[i+2]:
                cnt+=1
                res+=cnt
            else : cnt = 0
        return res