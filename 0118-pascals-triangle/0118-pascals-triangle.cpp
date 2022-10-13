class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
       vector<vector<int>> temp;
        for(int i=0;i<numRows;i++)
        {
        vector<int> ans;
            int flag=0;
            ans.push_back(1);
            for(int j=1;j<i;j++)
            {
                int prev_row=i-1;
                int sz=temp[prev_row].size();
                if(j<sz)
                {
                    int f=temp[prev_row][j-1]+temp[prev_row][j];
                    ans.push_back(f);
                }
                else 
                    break;
            }
            if(i!=0)
            ans.push_back(1);
            temp.push_back(ans);
        }
        // display(temp);
        return temp;
        
    }
};
