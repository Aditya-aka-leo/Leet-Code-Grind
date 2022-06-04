class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> v=nums;
        vector<int> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
        auto it=v.begin();
        while(it!=v.end())
        {
            if(nums[i]==*it)
            {
                ans.push_back(it-v.begin());

                break;
            }
            it++;
        }

        }
        return ans;
                
    } 
};