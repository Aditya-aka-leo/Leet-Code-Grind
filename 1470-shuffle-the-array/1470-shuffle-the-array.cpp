class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> ans;
        auto it = nums.begin();
        advance(it,n);
        int size =it-nums.begin();
        for(int i = 0; i <size; i++ && it != nums.end())

        {
            ans.push_back(nums[i]);
            ans.push_back(*it);
            it++;
        }
        return ans;


    }
};