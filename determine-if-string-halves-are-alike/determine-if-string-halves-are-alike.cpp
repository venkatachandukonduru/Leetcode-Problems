class Solution {
public:
    bool halvesAreAlike(string s) {
        int count =0;
        int n = s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<n/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count++;
            if(s[n-i-1]=='a'||s[n-i-1]=='e'||s[n-i-1]=='i'||s[n-i-1]=='o'||s[n-i-1]=='u')
                count--;
        }
        return !count;
    }
};