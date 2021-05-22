class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(target<nums[0])
        {
            for(int i=nums.size()-1;i>0;i--)
                if(nums[i]==target)return true;
                else if(nums[i]<target) return false;
        }
        else if(target==nums[0])return true;
        else
        {
            for(int i=1;i<nums.size();i++)
                if(nums[i]==target)return true;
                else if(nums[i]>target) return false;
        }
        return false;
    }
};