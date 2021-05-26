class Solution {
public:
    long long int count(int n)
    {
        long long int res=0;
        while(n)res+=pow(10,n%10),n/=10;
        return res;
    }
    bool reorderedPowerOf2(int n) {
        long long int c=count(n);
        for(long long int i=0;i<32;i++)
            if(count(1<<i)==c)return true;
        return false;
    }
};