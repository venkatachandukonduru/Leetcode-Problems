class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        if len(nums)<2:
            return 0
        res = {}
        tot = 0
        nums1 = nums[:]
        for i in range(len(nums1)):
            if nums1[i]==0:
                nums1[i]=-1
            if i==0:
                res[nums1[0]]=[0,0]
            if i>0:
                nums1[i]+=nums1[i-1]
                if nums1[i]==0:
                    tot = i+1
                if nums1[i] not in res:
                    res[nums1[i]]=[i,i]
                else:
                    res[nums1[i]][1]=i
        for i in res:
            tot = max(tot,res[i][1]-res[i][0])
        if tot%2!=0:
            tot+=1
        return tot
            