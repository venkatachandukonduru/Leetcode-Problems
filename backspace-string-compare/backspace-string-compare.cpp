class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++)
            if(i>=1 and s[i]=='#' )s.erase(s.begin()+i-1),s.erase(s.begin()+i-1),i-=2;
        for(int i=0;i<t.size();i++)
            if(i>=1 and t[i]=='#' )t.erase(t.begin()+i-1),t.erase(t.begin()+i-1),i-=2;
        cout<<"S:"<<s<<"  T:"<<t;
        while(s[0]=='#')s.erase(s.begin());
        while(t[0]=='#')t.erase(t.begin());
        return s==t;
        //return 0;
    }
};