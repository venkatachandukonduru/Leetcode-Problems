class Solution {
public:
    vector<int> temp;
    int flag=0;
    Solution(vector<int>& nums) {
        //for(auto i:nums)temp.push_back(i),reset1.push_back(i);
        this->temp=nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        //vector<int> temp=reset1;
        return temp;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
       vector<int> result(temp);
        for (int i = 0;i < result.size();i++) {
            int pos = rand()%(result.size()-i);
            swap(result[i+pos], result[i]);
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */