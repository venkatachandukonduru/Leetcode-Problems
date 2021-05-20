class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> v1;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)return res;
        for(int i=0;i<nums.size()-2;i++)
        {
            int left=i+1,right=nums.size()-1;
            int sum=0;
            while(left<right)
            {
                sum=nums[i]+nums[left]+nums[right];
                if(sum==0)
                {
                    v1.insert({nums[i],nums[left],nums[right]});
                    left++;
                }
                else if(sum<0)left++;
                else right--;
            }
        }
        for(auto i:v1)res.push_back(i);
        return res;
    }
};