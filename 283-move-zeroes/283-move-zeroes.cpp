class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(auto i:nums)
        {
            if(i!=0)
            temp.push_back(i);
        }
        // sort(temp.begin(),temp.end());
        while(temp.size()!=nums.size())
        {
            temp.push_back(0);
        }
       
        for(auto j:temp)
            cout<<j;
        nums=temp;
        
    }
};