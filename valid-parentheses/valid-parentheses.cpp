class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
    for(const auto& c : s){
        switch(c){
            case '{':  stk.push('}'); break;
            case '[':  stk.push(']'); break;
            case '(':  stk.push(')'); break;
            default:
                if(stk.size() == 0 || c != stk.top()) return false;
                else stk.pop();
        }
    }
    return stk.size() == 0;
    }
};
/*
stack<char>s1;
        for(auto i:s)s1.push(i);
        int res1=0,res2=0,res3=0;
        while(s1.size())
        {
            auto i=s1.top();
            s1.pop();
            if(i=='(')res1--;
            if(i==')')res1++;
            if(i=='{')res2--;
            if(i=='}')res2++;
            if(i=='[')res3--;
            if(i==']')res3++;
            if(res1<0 or res2<0 or res3<0)return false;
        }
        if(res1!=0 or res2!=0 or res3!=0)return false;
        return true;
    }
*/
    
/*
unordered_map<char,int> m1;
        for(auto i:s)
        {
            if(i=='(')m1[i]--;
            if(i==')')m1[i]++;
            if(i=='{')m1[i]--;
            if(i=='}')m1[i]++;
            if(i=='[')m1[i]--;
            if(i==']')m1[i]++;
            if(m1[')']>m1['('] or m1['}']>m1['{'] or m1[']']>m1['['])return false;
        }
        //int res=0;
        //for(auto i :m1)if()
        return true;
*/