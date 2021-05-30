class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v1;
        for(int i=0;i<=n;i++)
        {
            v1.push_back(__builtin_popcount(i));
        }
        return v1;
    }
};