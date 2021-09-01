class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count = 0,iter = 0;
        vector<bool> seen(nums.size(),0);
        for(int i:nums){
            seen[iter] = 1;
            int index = i;
            int temp = 0;
            while(index<nums.size()){
                if(seen[index]==1)break;
                temp++;
                seen[index] = 1;     
                index = nums[index];
            }
            count=max(count,temp);
            iter++;
            seen.clear();
        }
        return count+1;
    }
};