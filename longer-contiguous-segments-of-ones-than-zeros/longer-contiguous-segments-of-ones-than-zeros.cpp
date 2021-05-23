class Solution {
public:
    bool checkZeroOnes(string s) {
        int n1=0,max1=0,max2=0;
        if(s.size()==1 and s[0]=='1')return true;
        if(s.size()==0 and s[0]=='0')return false;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1')
            {
                if(n1==0)n1++;
                if(s[i]==s[i+1])
                    n1++;
            }
            else n1=0;
            max1=max(max1,n1);
        }
        n1=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                if(n1==0)n1++;
                if(s[i]==s[i+1])
                    n1++;
            }
            else n1=0;
            max2=max(max2,n1);
        }
       // cout<<max1<<max2;
        if(max1>max2)return true;
        else
        return false;
        
    }
};