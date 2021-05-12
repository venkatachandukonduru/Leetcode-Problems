class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++) { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i]) return false;
        return true;
    }
   
};
/*
 bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        // map<char,int>m1,m2;
        //int n1 = s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t?1:0;
        //for(auto x:s)m1[x]++;
        //for(auto x:t)m2[x]++;
        // for(auto x, auto y:s,t)m2[x]++;
        // for(auto x:s) if(m1[x]!=m2[x]) return false;
        return true;
    }
*/