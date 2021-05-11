class Solution {
public:
    double myPow(double x, int n) {
        if(x==1||n==0)return 1;
        if(n<0){n = abs(n);x = 1/x;}
        return n%2==0?myPow(x*x,n/2): x*myPow(x*x,n/2);
    }
};

/*
if(n==0)return 1;
        else if(n>0)
        {
            double res=1;
            while(n--)res*=x;
            return res;
        }
        else
        {
            double res=1;
            n=abs(n);
            while(n--)res/=x;
            return res;
        }
*/