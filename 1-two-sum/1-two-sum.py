class Solution:
    def twoSum(self, nums: List[int], tar: int) -> List[int]:
        dict1 = {}
        for i,j in enumerate(nums):
            if dict1.get(j,-1)==-1:
                # print(j)
                dict1[tar-j] = i
                # print(tar-j )
            else:
                # print(dict1.items())
                return [i,dict1[j]]
            
        # print(dict1.items())