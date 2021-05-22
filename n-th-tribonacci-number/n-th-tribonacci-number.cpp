class Solution {
public:
    int tribonacci(int n){
        int r=0,a=0,b=1,c=1;
        for(int i=3;i<=n;i++)
            r=a+b+c,a=b,b=c,c=r;
        if(n==1||n==2)return 1;
        return r;
    }
   
};
/*
 int func(int n,vector<long long int> &v1)
    {
        if(v1[n]!=-1)return v1[n];
        return func(n-1,v1)+func(n-2,v1)+func(n-3,v1);
    }
    int tribonacci(int n) {
        vector<long long int> v1(35,-1);
        v1[0]=0;
        v1[1]=1;
        v1[2]=1;
        return func(n,v1);
    }
*/