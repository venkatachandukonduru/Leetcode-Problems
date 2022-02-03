class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums)<3:
            return []
        res = set()
        nums.sort(reverse = True)
        for i in range(len(nums)-2):
            k = len(nums)-1
            j = i+1
            while j<k:
                if nums[i]+nums[j]+nums[k]==0:
                    res.add((nums[i],nums[j],nums[k]))
                    j+=1
                elif nums[i]+nums[j]+nums[k]<0:
                    k-=1
                else:
                    j+=1
        return list(res)