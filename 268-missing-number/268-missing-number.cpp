class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]-nums[i+1]!=-1))
                return nums[i]+1;
        }
        if(nums[nums.size()-1]!=nums.size())
            return nums.size();
        return 0;
    }
};