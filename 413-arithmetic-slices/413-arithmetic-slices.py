class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        if len(nums)<3 : return 0
        cnt = res = 0
        for i in range(len(nums)-2):
            if nums[i]-nums[i+1]==nums[i+1]-nums[i+2]: cnt+=1
            else :
                res+=((cnt)*(cnt+1))//2
                cnt = 0
        if cnt : res+=((cnt)*(cnt+1))//2
        return res