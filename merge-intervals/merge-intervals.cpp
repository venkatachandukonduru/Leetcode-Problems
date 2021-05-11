class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //for(auto i:intervals)cout<<i.start;
        sort(intervals.begin(),intervals.end(),[](auto a, auto b){return a[0]<b[0];});
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(res.back()[1]>=intervals[i][0])res.back()[1]=max(intervals[i][1],res.back()[1]);
            else res.push_back(intervals[i]);
        }
        return res;
    }
};

/*
vector<int> arr(10001,0);
        vector<vector<int>> res1;
        int max1=INT_MIN,min1=INT_MAX;
        for(auto i: intervals){
            arr[i[0]]++;
            arr[i[1]]--;
            max1=max(max1,i[1]);
            min1=min(min1,i[0]);
            if(i[0]==i[1]){vector<int>vr;
                vr.push_back(0);
                vr.push_back(0);
                res1.push_back(vr);}
        }
        int res =0;
        int flag =0;
        int start=0,end=0;
        for(int i=min1;i<=max1;i++)
        {
            res+=arr[i];
            if(res>0 and flag==0)
            {
                start = i;
                flag =1;
            }
            if(res==0 and flag ==1)
            {
                end = i;
                vector<int>vr;
                vr.push_back(start);
                vr.push_back(end);
                res1.push_back(vr);
                flag =0;
                
            }
        }
        return res1;
*/