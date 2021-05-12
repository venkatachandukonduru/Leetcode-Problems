class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s1(nums.begin(),nums.end());
        // sort(nums.begin(),nums.end());
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        //vector<int> s1 = nums;
        int res=0,max1=0;
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        auto i=s1.begin();
        auto j=next(s1.begin(), 1);
        while(i!=s1.end() and j!=s1.end())
        {
            if(*j-*i==1){res++;}
            else res=0;
            i++;j++;
            max1=max(max1,res);
        }
        return max1+1;
    }
};
/*
sort(nums.begin(),nums.end());
        int max1=0,count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]-nums[i+1]== -1)count++;
            else
            {
                max1 = max(count,max1);
                count =0;
            }
        }
        max1 = max(count,max1);
        return max1+1;
*/