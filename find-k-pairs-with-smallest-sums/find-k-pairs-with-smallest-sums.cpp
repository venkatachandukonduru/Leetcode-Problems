class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>v1;
        int sizea=nums1.size();
        int sizeb=nums2.size();
        int min1=min(k,sizea);
        int min2=min(k,sizeb);
        for(int i=0;i<min1;i++)
        {
            for(int j=0;j<min2;j++)
            {
                v1.push_back(make_pair(nums1[i],nums2[j]));
            }
        }
        sort(v1.begin(),v1.end(),[](auto a,auto b)
             {
                 return (a.first+a.second)<(b.first+b.second);
             });
        vector<vector<int>>res;
        int size1=v1.size();
        for(int j=0;j<min(k,size1);j++)res.push_back({v1[j].first,v1[j].second});
        return res;
                
    }
};