class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int flag =0 ;
        int j=0;
        vector<int>ans;
        
        for (int i=0;i<nums.size();i++)
        {
                ans.push_back(nums[i]);
        }
         for (int i=0;i<nums.size();i++)
        {
                ans.push_back(nums[i]);
        }
        
        return ans;
    }
};