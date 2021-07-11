class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> q1;
        for(auto i:matrix)
        {
            for(auto j: i)q1.push(j);
        }
        while(--k)q1.pop();
        return q1.top();
    }
};