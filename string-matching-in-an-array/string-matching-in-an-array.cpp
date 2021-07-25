class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        sort(words.begin(),words.end(),
             [](auto a, auto b){
            return a.size()>b.size();
        });
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i].find(words[j])!=string::npos){
                    res.push_back(words[j]);
                }
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};