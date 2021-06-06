class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int> m1(nums.begin(),nums.end());
        int res=1,tot=1;
        auto i=m1.begin();
        int temp=*i;
        i++;
        for(;i!=m1.end();i++)
        {
            if(*i-temp==1)res++;
            else tot=max(tot,res),res=1;
            temp=*i;
        }
        tot=max(tot,res);
        return tot;
        
    }
};
/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        map<int,int> m1;
        for(auto i:nums)m1[i]++;
        auto temp = *min_element(nums.begin(),nums.end());
        int res=1,tot=1;
        auto i=m1.begin();
        i++;
        for(;i!=m1.end();i++)
        {
            if(i->first-temp==1)res++;
            else tot=max(tot,res),res=1;
            temp=i->first;
        }
        tot=max(tot,res);
        return tot;
        
    }
};
/*class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s1(nums.begin(),nums.end());
        int y=0,best=0;
        for(auto x: s1)
        {
            //This if condition is so important
            if(s1.find(x-1)==s1.end())
            {
                y=x+1;
                while(s1.find(y)!=s1.end())
                {
                    y++;
                    
                }
                best=max(best,y-x);
            }
        }
        return best;
    }
};
/*
sort(nums.begin(),nums.end());
        int max1=0,count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]-nums[i+1]== -1)count++;
            else
            {
                max1 = max(count,max1);
                count =0;
            }
        }
        max1 = max(count,max1);
        return max1+1;
*/

/*
//set<int> s1(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        vector<int> s1 = nums;
        int res=0,max1=0;
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        auto i=s1.begin();
        auto j=next(s1.begin(), 1);
        while(i!=s1.end() and j!=s1.end())
        {
            if(*j-*i==1){res++;}
            else res=0;
            i++;j++;
            max1=max(max1,res);
        }
        return max1+1;
        */