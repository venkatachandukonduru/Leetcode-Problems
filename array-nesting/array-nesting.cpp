class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count = 0,iter = 0;
        vector<bool> seen(nums.size(),0);
        for(int i:nums){
            int temp = 0;
            while(seen[i]!=1){
                temp++;
                seen[i] = 1;     
                i = nums[i];
            }
            count=max(count,temp);
            seen.clear();
        }
        return count;
    }
};