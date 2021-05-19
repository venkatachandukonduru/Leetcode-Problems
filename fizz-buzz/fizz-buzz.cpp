class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string s1 = "FizzBuzz",s2="Fizz",s3="Buzz";
        int i=0;
        vector<string> v1;
        while(i++<n)
        {
            if(i%3==0 and i%5==0)v1.push_back(s1);
            else if(i%3==0)v1.push_back(s2);
            else if(i%5==0)v1.push_back(s3);
            else v1.push_back(to_string(i));
        }
        return v1;
    }
};