class Solution {
public:
    vector<char>m1;
    void reverse(int i,vector<char>& s)
    {
        if(i<(s.size()/2)+1)return;
        swap(s[i-1],s[s.size()-i]);
        reverse(i-1,s);
    }
    void reverseString(vector<char>& s) {
        reverse(s.size(),s);
        //for(auto i:m1)cout<<i;
    }
};