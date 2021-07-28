class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>in_fre;
        if(s2.length()<s1.length())return false;
        for(auto i: s1)
            in_fre[i]++;
        unordered_map<char,int>newfreq;
        for(int i=0;i<s1.size();i++)
            newfreq[s2[i]]++;
        for(int j=s1.size();j<s2.size();j++){
            int flag =0;
            for(auto k:newfreq){
                if(k.second!=in_fre[k.first]){
                    flag=1;
                    break;
                }
            }
            if(!flag)return true;
            //cout<<s2[j]<<":"<<s2[j-s1.size()];
            newfreq[s2[j]]++;
            newfreq[s2[j-s1.size()]]--;
        }
        int flag =0;
            for(auto k:newfreq){
                if(k.second!=in_fre[k.first]){
                    flag=1;
                    break;
                }
            }
            if(!flag)return true;
        return false;
    }
};
/*
bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>in_fre;
        if(s2.length()<s1.length())return false;
        for(auto i: s1)
            in_fre[i]++;
        unordered_map<char,int>temp1=in_fre;
        int flag = 0;
        for(int j=0;j<s1.length();j++)
            cout<<s2[j],in_fre[s2[j]]++;
        cout<<"\n";
        for(auto k:in_fre)
                if(k.second!=0)flag=1;
        if(!flag)return true;
        for(int i=s1.length();i<s2.length();i++){
            in_fre[s2[i]]++;
            in_fre[s2[i-s1.length()]]--;
            //cout<<s2[i]<<"-"<<s2[i-s1.length()]<<"\n";
            flag=0;
            for(auto k:in_fre)
                if(k.second!=temp1[k.first])
                    cout<<k.second<<":"<<temp1[k.first]<<"\n",flag=1;
            if(!flag)return true;
            //cout<<"\n";
        }
        return false;
    }
*/