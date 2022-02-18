class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if nums.count(0)>1: return [0]*len(nums)
        temp = flag = 1
        for i in nums:
            if i==0: flag = 0
            else : temp*=i
        if flag == 0:
            for i in range(len(nums)) : nums[i] = temp if nums[i]==0 else 0
        else :
            for i in range(len(nums)) : nums[i] = temp//nums[i]
        return nums
        
        
        
        
        
        
        
        
        
        
        
        
        
        '''
        temp1 = nums
        count = 1
        flag = 0
        if (0 in temp1):
            flag = 1
        for i in temp1:
            if i!=0:
                count*=i
        if flag == 1:
            for i in range(len(temp1)):
                if temp1[i]!=0:
                    nums[i] = 0
                else:
                    nums[i]
            return nums
        for i in range(len(temp1)):
            if temp1[i]!=0:
                nums[i] = count//temp1[i]
        return nums
        '''
                