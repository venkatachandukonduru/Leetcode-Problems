class Solution {
public:
    vector<string> res;
    void solve(string input,string output){
        if(output.size()==0){
            res.push_back(input);
            return;
        }
        string s1 = input;
        string s2 = input;
        if(output[0]>='a' and output[0]<='z'){
            s1.push_back(output[0]);
            s2.push_back(output[0]-32);
            output.erase(output.begin());
            solve(s1,output);
            solve(s2,output);
        }
        else if(output[0]>='A' and output[0]<='Z'){
            s1.push_back(output[0]);
            s2.push_back(output[0]+32);
            output.erase(output.begin());
            solve(s1,output);
            solve(s2,output);
        }
        else{
            s1.push_back(output[0]);
            s2.push_back(output[0]);
            output.erase(output.begin());
            solve(s1,output);
            //solve(s1,output);
        }
        
        
    }
    vector<string> letterCasePermutation(string s) {
        string input;
        solve(input,s);
        return res;
    }
};