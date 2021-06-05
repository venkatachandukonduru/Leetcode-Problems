class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        vector<pair<int,int>> v1;
        for(int i=0;i<s.size();i++)v1.push_back({e[i],s[i]});
        sort(v1.begin(),v1.end(),[](auto a, auto b){return a.first>b.first;});
        priority_queue<int,vector<int>,greater<int>>sp;
        //int sum=0;
        long long int res=0,sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=v1[i].second;
            sp.push(v1[i].second);
            if(sp.size()>k)
            {
                sum-=sp.top();
                sp.pop();
            }
            res=max(res,sum*v1[i].first);
        }
        return (res%1000000007);
        
    }
};