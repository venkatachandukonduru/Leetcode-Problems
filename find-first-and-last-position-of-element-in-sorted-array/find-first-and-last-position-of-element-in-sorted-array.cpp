class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        auto low1 = lower_bound(nums.begin(),nums.end(),target);
        auto high1 = upper_bound(nums.begin(),nums.end(),target);
        int low =low1 -nums.begin();
        int high = high1-nums.begin();
        vector<int> v1;
        if(low==nums.size()||nums[low]!=target)return {-1,-1};
        if(nums[high-1]!=target)high=0;
        v1.push_back(low);
        v1.push_back(high-1);
        return v1;
    }
};