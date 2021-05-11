class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int res=0,sum=0;
        for(int i=1;i<p.size();i++)
        {
            sum+=p[i]-p[i-1];
            res=max(res,sum);
            if(sum<0)sum=0;
        }
        return res;
    }
};
/*
int maxProfit(vector<int>& prices) {
        int min1=INT_MAX;
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
            min1=min(min1,prices[i]);
            res=max(prices[i]-min1,res);
        }
        return res;
    }
*/