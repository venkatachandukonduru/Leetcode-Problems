class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        unordered_map<int,int>m1,m2;
        for(auto i:num1)m1[i]++;
        for(auto i:num2)m2[i]++;
        vector<int> v1;
        if(num1.size()<num2.size())
        for(auto i :num1)
        {
            if((m1[i]&&m2[i]))
            {
                m1[i]--;
                m2[i]--;
                v1.push_back(i);
            }
        }
        else
        for(auto i :num2)
        {
            if((m1[i]&&m2[i]))
            {
                m1[i]--;
                m2[i]--;
                v1.push_back(i);
            }
        }
            
        return v1;
    }
};