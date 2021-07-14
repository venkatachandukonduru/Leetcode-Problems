class Solution {
public:
    int var=1;
    int func(int n)
    {
        if(n==3||n==1)return 1;
        if(n==0||n%3!=0)
        {
            var=0;
            return 0;
        }
        return func(n/3);
        
    }
    bool isPowerOfThree(int n) {
        return var and func(n);
    }
};
/*
if(n%2==0)return 0;
        while(n>=1)
        {
            if(!(n%3==0))return 0;
            n/=3;
        }
        return 1;
        */