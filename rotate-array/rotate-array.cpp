class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)return ;
        std::rotate(nums.rbegin(),nums.rbegin()+(k%nums.size()),nums.rend());
    }
};