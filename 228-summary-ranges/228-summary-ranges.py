class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not nums : return nums
        res = []
        i = 1
        cnt = 0
        while i<=len(nums):
            if i !=len(nums) and nums[i]-1==nums[i-1] :cnt+=1
            else :
                if cnt :
                    res.append(str(nums[i-cnt-1])+"->"+str(nums[i-1]))
                    cnt = 0
                else : res.append(str(nums[i-1]))
            i+=1
        return res
                
                
            