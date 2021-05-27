class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1,c=0;
        if(n<2)return 1;
        while(n>=2)c=a+b,a=b,b=c,n--;
        return c;
    }
};