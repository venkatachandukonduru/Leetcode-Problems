class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s1;
        sort(nums.begin(),nums.end());
        s1.insert(nums);
        while(next_permutation(nums.begin(),nums.end()))
            s1.insert(nums);
        vector<vector<int>> result;
        for(auto i:s1)result.push_back(i);
        return result;
    }
};