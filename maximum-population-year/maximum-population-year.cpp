class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs)
    {
        map<int,int> m1;
        for(vector<int>v1 : logs)
        {
            for(int i = v1[0];i<v1[1];i++)m1[i]++;
        }
        for(auto it:m1)cout<<it.first<<":"<<it.second<<" ";
        int cnt=0,year=9999;
        //sort(m1.begin(),m1.end());
        for(auto m2:m1)
        {
            if(m2.second>cnt)
            {
                year = m2.first;
                cnt = max(cnt,m2.second);
            }
        }
        return year;
    }
    /*int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> birth,death;
        if(logs[0].size()==1)
        {
            vector<int> v1 = logs[0];
            return v1[0];
        }
        for(int i=0;i<logs[0].size();i++)
        {
            //for(int j=0;j<logs[0].size();j++)
            {
            vector<int> v1 = logs[i];
            birth.push_back(v1[0]);
            death.push_back(v1[1]);
            }
        }
        //for(auto i: birth)cout<<i;
        
        int min1 = *min_element(birth.begin(),birth.end());
        int max1 = *max_element(death.begin(),death.end());
        cout<<max1;
        int cnt =0,year=0;
        for(int i=min1;i<max1;i++)
        {
            int n=0;
            for(int j=0;j<birth.size();j++)
            {
                if(i>=birth[j] && i<death[j])
                {
                    n++;
                }
            }
            if(n>cnt)year=i;
            cnt = max(cnt,n);
            
            
        }
        return year;
    }*/
};