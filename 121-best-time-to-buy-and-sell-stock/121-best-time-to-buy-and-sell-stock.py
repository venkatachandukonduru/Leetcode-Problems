class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0
        min1 = float('inf')
        for i in range(len(prices)):
            min1 = min(min1,prices[i])
            res = max(res,prices[i]-min1)
        return res
        