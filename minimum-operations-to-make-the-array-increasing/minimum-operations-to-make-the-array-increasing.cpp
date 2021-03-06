class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            int temp=0;
            if(nums[i]==nums[i-1])
                nums[i]=(nums[i-1]+1),res++;
            else if(nums[i]<nums[i-1]){
                temp=abs(nums[i]-nums[i-1]);
                res+=temp+1;
                nums[i]+=temp+1;
            }  
        }
        return res;
    }
};