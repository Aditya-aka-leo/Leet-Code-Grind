class Solution {
public:
    int findGCD(vector<int>& nums)
{
        sort(nums.begin(), nums.end());
        int min=*nums.begin();
        auto it=nums.begin();
        while(it+1 !=nums.end())
        it++;
        int max=*it;
        int i=1;
        int temp=1;
        while(i <= min)
        {
            if(min%i==0 && max%i==0)
            {
                if(i > temp)
                temp=i;
            }
            i++;
        }
        return temp;
    }
};