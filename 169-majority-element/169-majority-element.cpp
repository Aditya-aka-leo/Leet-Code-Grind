class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int count=1;
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
            {
                count=1;
                x=nums[i];
            }
            else if(nums[i]==x)
                count++;
            else
                count--;
        }
        return x;
    }
};