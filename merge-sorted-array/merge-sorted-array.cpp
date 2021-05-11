class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = nums2.size();
        //if(nums1.size()==1)nums1[0]=nums2[0];
        //else
        {
        for(int i=0;i<n;i++)nums1[m+i]=nums2[i];
        sort(nums1.begin(),nums1.end());
        }
        //return nums1;
    }
};