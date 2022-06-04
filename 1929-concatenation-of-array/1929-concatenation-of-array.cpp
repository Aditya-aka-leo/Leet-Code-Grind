class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int flag =0 ;
        int j=0;
        vector<int>ans;
        
        ans.insert(ans.end(),nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }
};