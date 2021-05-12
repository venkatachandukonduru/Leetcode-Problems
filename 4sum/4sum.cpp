class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s1;
        int sum=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        if(nums.size()<4)return res;
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int left = j+1,right = nums.size()-1;
                while(left<right)
                {
                    sum = nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target)
                    {
                        s1.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                    }
                    else if(sum<target)left++;
                    else right--;
                }
            }
        }
        for(auto i:s1)res.push_back(i);
        return res;
    }
};