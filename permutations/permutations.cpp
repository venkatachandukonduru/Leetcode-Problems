class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>m1;
        m1.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            m1.push_back(nums);
        }
        return m1;
    }
};