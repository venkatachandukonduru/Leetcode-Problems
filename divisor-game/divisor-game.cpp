class Solution {
public:
    bool divisorGame(int n) {
       return (n+1)%2;
    }
};
/*
int game(int n)
    {
        flag++;
        if(n==0)return 0;
        else if(n&1)return game(n-1);
        else if((n&1)==0)return game(n-2);
        return flag;
    }
    if(n==0)return (flag+1)%2;
            else
    */