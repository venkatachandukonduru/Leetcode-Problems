class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0,max1=0;
        for(auto x:accounts)
        {
            res=0;
            for(auto y:x){
                res+=y;
            }
            max1=max(res,max1);
        }
        return max1;   
    }
};