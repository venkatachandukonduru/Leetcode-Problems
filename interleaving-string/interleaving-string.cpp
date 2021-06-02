class Solution {
    public:
    bool isInterleave(string s1, string s2, string s3) {
    
    if(s3.length() != s1.length() + s2.length())
        return false;
    
    bool table[s1.length()+1][s2.length()+1];
    
    for(int i=0; i<s1.length()+1; i++)
        for(int j=0; j< s2.length()+1; j++){
            if(i==0 && j==0)
                table[i][j] = true;
            else if(i == 0)
                table[i][j] = ( table[i][j-1] && s2[j-1] == s3[i+j-1]);
            else if(j == 0)
                table[i][j] = ( table[i-1][j] && s1[i-1] == s3[i+j-1]);
            else
                table[i][j] = (table[i-1][j] && s1[i-1] == s3[i+j-1] ) || (table[i][j-1] && s2[j-1] == s3[i+j-1] );
        }
        
    return table[s1.length()][s2.length()];
}
};
/*
 int func(string s1, string s2, string s3)
    {
        int i=0,j=0,k=0,flag=0;
        if(s1.empty() and s2==s3)return 1;
        if(s2.empty()and s1==s3)return 1;
        if(s1.size()+s2.size()!=s3.size())return 0;
        while((i+j)<s3.size())
        {
            if(s1[i]==s3[k] and i<s1.size()and flag==0)
            {
                //cout<<s1[i]<<"-"<<i;
                i++;
                k++;
                flag = s1[i]==s3[k]?0:1;
                if(i>s1.size())flag=1;
            }
            else if(s2[j]==s3[k] and j<s2.size() and flag==1)
            {
                //cout<<s2[j]<<"-"<<j;
                j++;k++;
                flag =(s2[j]==s3[k])?1:0;
                if(j>s2.size())flag=0;
            }
            else return 0;
        }
        return 1;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m1 = func(s1,s2,s3);
        if(m1==1)return 1;
        m1 = func(s2,s1,s3);
        if(m1==1)return 1;
        else return 0;
    }
*/