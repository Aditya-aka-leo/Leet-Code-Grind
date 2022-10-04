class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size()-1;
        while(i>0)
        {
            if(target<matrix[i][0])
                i--;
            else
            break;
        }
        return binary_search(matrix[i].begin(),matrix[i].end(),target);
        return 0;
        
    }
};