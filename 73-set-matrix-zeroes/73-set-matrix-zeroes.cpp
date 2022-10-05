class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<int> temp;
        for(int i=0;i<matrix.size();i++)
        {
            int flag=0;
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    // fill(matrix[i].begin(),matrix[i].end(),0);
                    temp.push_back(j);
                    flag=1;
                }
                
            }
            if(flag==1)
                fill(matrix[i].begin(),matrix[i].end(),0);
                
            
        }
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
                matrix[j][temp[i]]=0;
        }
        
    }
};