/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pos=0;
        if(nums[0]<=target)
        {for(int i=0;i<nums.size();i++)if(nums[i]==target)return i;}
        else
        {for(int i=nums.size()-1;i>0;i--)if(nums[i]==target)return i;}
        return -1;
    }
};
// @lc code=end

