class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(auto i:s) if((i>=65 and i<=90) or (i>=97 and i<=122) or (i>=48 and i<=57))s1.push_back(i>90?i-32:i);
        cout<<s1<<"\n";
        //if(s1.size()==1)return false;
        for(int i=0;i<s1.size()/2;i++)if(s1[i]!=s1[s1.size()-i-1])return 0;
        return 1;
    }
};