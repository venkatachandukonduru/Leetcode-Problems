class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& res) {
        int n=res.size();
        sort(res.begin(),res.end());
        //res.erase(unique(res.begin(),res.end()),res.end());
        int left=0,right=1;
        int cnt=0;
        while(left<res.size() and right<res.size())
        {
            if(res[left][1]>res[right][0])
            {
                cnt++;
                if(res[left][1]>res[right][1])left=right;
            }
            else left = right;
            right++;
        }
        return cnt;
    }
};