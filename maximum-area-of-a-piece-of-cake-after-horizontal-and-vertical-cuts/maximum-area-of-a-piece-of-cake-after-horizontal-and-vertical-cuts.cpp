class Solution {
public:
    int maxArea(int h1, int w1, vector<int>& h, vector<int>& v) {
        long long int d1 = 10e9+7;
        long long int d;
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int m1 = max(h[0],h1-h.back());
        int m2 = max(v[0],w1-v.back());
        long long int i=0;
        while(i++<h.size()-1)m1=max(m1,h[i]-h[i-1]);
        i=0;
        while(i++<v.size()-1)m2=max(m2,v[i]-v[i-1]);
        //d = m1*m2%d1;
        return (int)((long)m1*m2%1000000007);
        
    }
};
/*
// nth_element(h.begin(),h.begin()+1,h.end(),greater<int>());
        // nth_element(v.begin(),v.begin()+1,v.end(),greater<int>());
        // if(v.size()==1 and h.size()==1)return h[0]*v[0];
        // if(v.size()==1){d=(h[0]-h[1])*v[0];return d%d1;}
        // if(h.size()==1){d=(v[0]-v[1])*h[0];return d%d1;}
        // d = (h[0]-h[1])*(v[0]-v[1]);
        // return d%d1;
        // int m1= *(h.begin()+1);
        // int m2 =*max_element(h.begin(),h.end());
        // m2 = *h.begin();
        // int m3 = *min_element(v.begin(),v.end());
        // int m4 = *max_element(v.begin(),v.end());
        // long long d = ((m4-m3)*(m2-m1));
        // cout<<m1<<m2;
        //return d%d1;
*/