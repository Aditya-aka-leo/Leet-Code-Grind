class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        unordered_map<int,int> map;
        for(int i=0; i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        for(int i=nums.size()-1;i>0;i--)
        {

            if(map.find(nums[i])->second > 1)
            {
                   map[nums[i]]--; 
                   nums.erase(nums.begin()+i);   
            }
        }
        for(int i=0; i<nums.size();i++)
        {
            cout <<nums[i]<<endl;
        }
        return nums.size();
    }
    
};