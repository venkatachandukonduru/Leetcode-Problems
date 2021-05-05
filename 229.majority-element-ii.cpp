/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> v1;
        vector<int> arr;
        int count = floor(nums.size()/3);
        for(int i:nums)
        {
            v1[i]++;
        }
        for(auto i:v1)
        {
            //v1[i]++;
            if(i.second>count){arr.push_back(i.first);}
        }
        //sort(arr.begin(),arr.end());
        //arr.erase(unique(arr.begin(),arr.end()),arr.end());
        return arr;
    }
};
// @lc code=end

