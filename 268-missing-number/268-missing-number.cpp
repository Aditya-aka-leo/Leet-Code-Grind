class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if((nums[i]-nums[i+1]!=-1))
        //         return nums[i]+1;
        // }
        // if(nums[nums.size()-1]!=nums.size())
        //     return nums.size();
        // return 0;
        int sum=0,res=0;
        int i=0;
        for(;i<nums.size();i++)
        {
            sum=sum+i;
            res=res+nums[i];
        }
        sum=sum+i;
        return sum-res;
    }
};