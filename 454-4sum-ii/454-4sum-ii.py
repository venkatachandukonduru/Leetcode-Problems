class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        c = Counter(a+b for a in nums1 for b in nums2)
        return sum(c[-i-j] for i in nums3 for j in nums4)
        
        
        
        
        
        
        
        
        
        
    """
    res = set()
        count = 0
        for i in nums1:
            for j in nums2:
                for k in nums3:
                        if -1*(i+j+k) in nums4:
                            count+=1
                            #res.add((i,j,k,l))
                            #print(i,j,k,-1*sum)
        #print(set(res))
        return count
    
    """