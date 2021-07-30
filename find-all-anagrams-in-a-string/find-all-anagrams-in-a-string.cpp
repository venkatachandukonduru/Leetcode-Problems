class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v1;
        if(p.size()>s.size())return v1;
        //hash< vector<int> >h1;
        //sort(begin(p),end(p));
        vector<int> temp(26,0),init(26,0);
        for(int i=0;i<p.size();i++){
            init[p[i]-'a']++;
            temp[s[i]-'a']++;
        }
        for(int i=p.size();i<s.size();i++){
            int flag =0;
            for(int i=0;i<26;i++)
                if(init[i]!=temp[i]){
                    flag =1;
                    break;
                }
            if(!flag)v1.push_back(i-p.size());
            temp[s[i-p.size()]-'a']--;
            temp[s[i]-'a']++;
                //string temp1 = temp;
                //sort(begin(temp1),end(temp1));
            // if(hash_value(temp)==hash_value(init))
            
        }
        int flag =0;
        for(int i=0;i<26;i++)
            if(init[i]!=temp[i]){
                flag =1;
                break;
            }
        if(!flag)v1.push_back(s.size()-p.size());
        // if(h1(temp)==h1(p))
        //             v1.push_back(s.size()-p.size());
        return v1;
    }
};