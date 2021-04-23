/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 
         int rows = matrix.size();
        int cols = matrix[0].size();
        int rows1[rows];
        int cols1[cols];
        for(int i=0; i<rows;i++)rows1[i]=-1;
        for(int i=0; i<cols;i++)cols1[i]=-1;
        for(int i=0; i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows1[i]=0;
                    cols1[j]=0;
                }
            }
        }
        
        for(int i=0; i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(rows1[i]==0||cols1[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }


        // 
    }
};
// int rows = matrix.size();
        // int cols = matrix[0].size();
        // int rows1[rows];
        // int cols1[cols];
        // memset(rows1,-1,rows);
        // memset(cols1,-1,cols);
        // for(int i=0; i<rows;i++)
        // {
        //     for(int j=0;j<cols;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             rows1[i]=0;
        //             cols1[j]=0;
        //         }
        //     }
        // }
        
        // for(int i=0; i<rows;i++)
        // {
        //     for(int j=0;j<cols;j++)
        //     {
        //         if(rows1[i]==0||cols1[j]==0)
        //         {
        //             matrix[i][j]=0;
        //         }
        //     }
        // }



 //int m = matrix.size();
        // int n = matrix[0].size();
        // unordered_set<int> rows;
        // unordered_set<int> cols;
        
        // for(int i = 0 ; i < m ; ++i) {
        //     for(int j = 0 ; j < n ; ++j) {
        //         if (matrix[i][j] == 0) {
        //             rows.insert(i);
        //             cols.insert(j);
        //         }
        //     }
        // }
        
        // for(int row : rows) {
        //     for(int i = 0 ; i < n ; i++) {
        //         matrix[row][i] = 0;
        //     }
        // }
        
                
        // for(int col : cols) {
        //     for(int i = 0 ; i < m ; i++) {
        //         matrix[i][col] = 0;
        //     }
        // }

// @lc code=end

