/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int max1 = INT_MIN;
        for(auto x:nums)
        {
            sum+=x;
            max1 = max(sum,max1);
            if(sum<0)sum=0;

        }
        return max1;
    }
};
// @lc code=end

