class Solution {
public:
    vector<vector<int>> generate(int i) {
        vector<vector<int>> res;
        vector<int> v1({1,1});
        if(i==1)res.push_back({1});
        else
        {
           res.push_back({1});
            for(int j=0;j<i-1;j++)
            {
                 vector<int> r1;
                r1.push_back(1);
                if(j!=0)for(int r=1;r<v1.size();r++)r1.push_back(v1[r]+v1[r-1]);
                r1.push_back(1);
                res.push_back(r1);
                v1 = r1;
            }
            
        }
        return res;
    }
};