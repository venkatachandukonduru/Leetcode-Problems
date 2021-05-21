class Solution {
public:
    bool canPartition(vector<int>& nums,bitset<200*100>b=1,int sum=0) {
        for(auto i:nums) sum+=i,b|=(b<<i);
        return !(sum&1) and b[sum/2];
    }
};