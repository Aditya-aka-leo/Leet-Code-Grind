class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int>runSum;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            i=j;
            int sum=0;
            while(i>=0)
            {
                sum=sum+nums[i];
                i--;
            }
            runSum.push_back(sum);
        }
        return runSum;
        
    }
};