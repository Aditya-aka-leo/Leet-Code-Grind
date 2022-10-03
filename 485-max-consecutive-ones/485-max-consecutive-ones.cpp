class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter=0;
        int largest=0;
        nums.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==1)
                counter++;
            else
            {
                if(counter>largest)
                {
                    largest=counter;
                }
                counter=0;
            }
    }
        return largest;
        
    }
};