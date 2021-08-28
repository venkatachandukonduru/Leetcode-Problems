class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            if(target>=matrix[i][0] and target<=matrix[i][m-1]){
                //if(target==i.front() or target==i.back())return true;
                auto temp = matrix[i];
                auto it = find(temp.begin(),temp.end(),target);
                if(it !=temp.end())return true;
            }
        }
        return false;
    }
};