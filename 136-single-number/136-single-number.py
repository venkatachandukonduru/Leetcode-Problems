class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        return reduce(lambda a,b : a^b,nums)
        """count = 0
        for i in nums:
            count^=i
        return count"""