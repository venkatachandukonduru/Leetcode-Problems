class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long total;
        for(auto i:nums){
            if(i==0)continue;
            total*=i;
        }
        long long temp = INT_MIN;
        for(int i=0;i<nums.size();i++){
            long long var = 1;
            for(int j=i;j<nums.size();j++){
                var*=nums[j];
                temp = max(temp,var);
                if(var==0)break;
                    
            }
        }
        return temp;
    }
};