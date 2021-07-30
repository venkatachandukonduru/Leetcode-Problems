class Solution {
public:
    int val=0;
    void steps(int num){
        if(num==0)
            return;
        if(num%2==0){
            val++;
            steps(num/2);
        }
        else{
            val++;
            steps(num-1);
        }
    }
    int numberOfSteps(int num) {
        steps(num);
        return val;
    }
};