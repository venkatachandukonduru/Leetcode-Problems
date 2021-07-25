class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //if(nums1.size()==0 and nums2.size()==0)return 0;
        int i=0;
        priority_queue<int> v1;
        while(i<nums1.size())v1.push(nums1[i]),i++;
        i=0;
        while(i<nums2.size())v1.push(nums2[i]),i++;
        if(v1.size()%2!=0){
            int size=v1.size()/2;
            while(size--)v1.pop();
            return (double)v1.top();
        }
        else{
            int size=(v1.size()/2)-1;
            while(size--)v1.pop();
            int x=v1.top();
            v1.pop();
            int y=v1.top();
            return (double)(x+y)/2;
        }
        
    }
};