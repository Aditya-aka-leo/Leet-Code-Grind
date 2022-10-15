class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {   
        int r=nums.size()-1, l=0, m;
        bool isFind=false;
        while(l<=r)
        {
            m=(r+l)/2;
            if(nums[m]==target)
            {
                isFind = true;
                break;
            }
            if(nums[m]<target) 
                l=m+1;
            else r=m-1;
        }  

        if(isFind) return m;
        if(target>nums[nums.size()-1]) return l;
        else return r+1;
            
        
    }
};