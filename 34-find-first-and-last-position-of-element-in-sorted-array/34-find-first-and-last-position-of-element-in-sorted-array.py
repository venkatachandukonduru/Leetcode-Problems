class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def find_first(nums,target):
            left,right = 0,len(nums)-1
            while left<=right:
                mid = (left+right)//2
                if nums[mid]<target:
                    left = mid+1
                elif nums[mid]>target:
                    right = mid-1
                else :
                    right = mid-1
            return left if left<len(nums) and nums[left]==target else -1
        
        def find_last(nums,target):
            left,right = 0,len(nums)-1
            while left<=right:
                mid = (left+right)//2
                if nums[mid]<target:
                    left = mid+1
                elif nums[mid]>target:
                    right = mid-1
                else :
                    left = mid+1
            return right if -1< right < len(nums) and nums[right]==target else -1
        
        return [find_first(nums,target),find_last(nums,target)]
        