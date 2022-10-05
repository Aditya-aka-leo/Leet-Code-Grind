class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        // int count=1;
        // int x=nums[0];
        // for(auto i:nums)
        // {
        //     if(count==0)
        //     {
        //         count=1;
        //         x=i;
        //     }
        //     else if(i==x)
        //         count++;
        //     else
        //         count--;
        // }
        // return x;
        int count=1;
        int majel=nums[0];
        for(int i=1;i<nums.size();i++){
            if(count==0){
                count =1;
                majel=nums[i];
            }
            else if(nums[i]==majel)
                count++;
            else
                count--;
        }
        return majel;
    }
};