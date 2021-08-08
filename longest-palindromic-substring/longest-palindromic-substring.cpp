class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1)return s;
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
        for(int i=0;i<s.size();i++){
            dp[i][i]=1;
        }
        int maxlength =1,start =0;
        string res;
        res+=s[0];
        int len = s.size();
        for(int i=len-1;i>=0;i--){
            for(int dist = 1;dist<len-i;dist++){
                int j=dist+i;
                dp[i][j]=(dist==1)?s[i]==s[j]:s[i]==s[j] and dp[i+1][j-1];
                if(dp[i][j] and maxlength<j-i+1){
                    //res = s.substr(i,dist+1);
                    start =i;
                    maxlength = j-i+1;
                }
            }
        }
        return s.substr(start,maxlength);
    }
};