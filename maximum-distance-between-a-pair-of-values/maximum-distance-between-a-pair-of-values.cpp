class Solution {
public:
    int maxDistance(vector<int>& n1, vector<int>& n2) {
    int i = 0, j = 0, res = 0;
    while (i < n1.size() && j < n2.size()) {
        if (n1[i] > n2[j])
            ++i;
        else
            res = max(res, j++ - i);
    }
    return res;
}
//     int maxDistance(vector<int>& nums1, vector<int>& nums2) {
//         int max1=0;
//         for(int i=0;i<nums1.size();i++)
//         {
//             for(int j=i;j<nums2.size();j++)
//             {
//                 if(nums1[i]>nums2[j])break;
//                 if(nums1[i]<=nums2[j])
//                 {
//                     max1 = max(max1,abs(j-i));
//                 }
                
//             }
//         }
//         return max1;
//     }
};