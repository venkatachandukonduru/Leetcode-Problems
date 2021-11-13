class Solution {
public:
    int compress(vector<char>& temp) {
        string s="";
        int count = 0;
        for(int i = 0;i<temp.size();i++){
            s+=temp[i];
            for(int j = i;j<temp.size()-1;j++)
                if(temp[j]==temp[j+1]){
                    count++;
                }
            else break;
            i+=count;
            if(count!=0)
            s.append(to_string(count+1));
            count = 0;
            
        }
        cout<<s;
        temp.resize(s.size());
        for(int i = 0;i<s.size();i++)temp[i] = s[i];
        return s.size();
    }
};