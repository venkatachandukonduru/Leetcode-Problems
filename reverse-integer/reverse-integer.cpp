class Solution {
public:
    int reverse(int x) {
        //long long p=INT_MAX;
        if (x>INT_MAX or x<INT_MIN)return 0;
        string s=to_string(abs(x));
        for(long long i=0;i<s.size()/2;i++)swap(s[i],s[s.size()-i-1]);
        //cout<<s<<"\n";
        long long int p=stoll(s);
        if(p>INT_MAX or p<INT_MIN)return 0;
        return x<0?-1*p:p;
    }
};