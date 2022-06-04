class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums)\
     {
        vector<int> ans;
        for(int i=0; i<nums.size()-1;i++)
        {
            int frq = nums[i];
            while(frq!=0)
            {
                ans.push_back(nums[i+1]);
                frq--;
            }
            i++;

        }
        return ans;
    }
};