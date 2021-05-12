class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int left =0;
        for(int i=0;i<arr.size();i++)
            if(arr[i]!=0)arr[left++]=arr[i];
        for(int i=left;i<arr.size();i++)arr[i]=0;
    }
};
/*
        int g=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[g]!=0)g++;
            if((arr[i]!=0&&arr[g]==0)&&(g<i)){swap(arr[i],arr[g]);g++;}
        }
*/