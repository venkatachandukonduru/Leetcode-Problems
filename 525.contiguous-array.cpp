/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int c0=0,c1=0,res=0,max1=0;
        for(int p=0;p<nums.size();p++)
        {
            c0=0;
            c1=0;
        for(int q=p;q<nums.size();q++)
        {
            int i=nums[q];
            i==0?c0++:c1++;
            if(c0==c1)res=c0+c1;
            max1 = max(res,max1);
        }
        }
        return max1;
    }
};
// @lc code=end

