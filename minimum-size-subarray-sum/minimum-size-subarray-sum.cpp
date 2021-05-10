class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0,res =0,len=999999;
        for(int i=0;i<nums.size();i++)
        {
            res+=nums[i];
            while(res>=target)
            {
                len=min(len,i+1-left);
                res-=nums[left];
                left++;
            }
        }
        return len==999999?0:len;
    }
};