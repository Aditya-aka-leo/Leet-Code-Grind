class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int>runSum;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            runSum.push_back(sum);
            
        }
        return runSum;
    }
};