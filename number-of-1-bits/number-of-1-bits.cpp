class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned n1=1;
        int count=0;
        int y=32;
        while(y--)
        {
            if((n&n1)==n1)count+=1;
            n1=n1<<1;
        }
        return count;
    }
};