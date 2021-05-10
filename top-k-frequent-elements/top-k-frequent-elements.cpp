class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v1;
        unordered_map<int,int>m1;
        for(auto i:nums)m1[i]++;
        vector<pair<int,int>> p1(m1.begin(),m1.end());
        sort(p1.begin(),p1.end(),[](pair<int,int> a, pair<int,int> b){return a.second>b.second;});
        //for(auto i:m1) if(i.second>=k) v1.push_back(i.first);
        for(auto i: p1)if(k>0){v1.push_back(i.first); k--;}
        return v1;
    }
};