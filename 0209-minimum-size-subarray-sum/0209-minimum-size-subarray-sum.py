class Solution:
    def minSubArrayLen(self, tar: int, nums: List[int]) -> int:
        size = 100001
        start,end,sum1 = 0,0,0
        for i in nums:
            end+=1
            sum1+=i
            if sum1>= tar:
                while sum1 >= tar:
                    sum1-=nums[start]
                    start+=1
                size = min(size,end-start+1)
        
        if size == 100001 : size = 0
        return size
#         size = 100001
#         start,end = 0,0
#         for i in nums:
#             end+=1
#             if sum(nums[start:end]) >= tar:
#                 while sum(nums[start:end]) >= tar:
#                     start+=1
#                 size = min(size,end-start+1)
        
#         if size == 100001 : size = 0
#         return size
            