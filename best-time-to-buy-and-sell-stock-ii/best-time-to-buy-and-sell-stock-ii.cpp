class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        for(auto i=prices.begin()+1;i<prices.end();i++){
            auto j = prev(i,1);
            if(*j < *i)res+=*i-*j;
        }
        return res;
    }
};