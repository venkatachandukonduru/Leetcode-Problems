class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
      vector<vector<int>>v1(grid.size()+2,vector<int>(grid[0].size()+2,999));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0 and j==0)v1[i][j]=grid[i][j];
                else if(i==0)
                v1[i][j]=grid[i][j]+(v1[i][j-1]);
                else if(j==0)
                    v1[i][j]=grid[i][j]+(v1[i-1][j]);
                else
                    v1[i][j]=grid[i][j]+min(v1[i-1][j],v1[i][j-1]);
                cout<<v1[i][j]<<" ";
            }
            cout<<"\n";
        }
        return v1[grid.size()-1][grid[0].size()-1];
    }
};