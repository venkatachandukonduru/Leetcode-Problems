/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        int mid = (low+high)/2;
        int i=0;
        while(low<high)
        {
            if(arr[i]==0){arr[low]=0;low++;i++;}
            else if(arr[i]==2)
            {
                swap(arr[i],arr[high]);
                high--;
                if(arr[i]==1)
            }
        }
    }
};
// @lc code=end

