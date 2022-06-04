class Solution {
public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int max=-1;
        for(int i = 0; i < candies.size(); i++)
        {
            if(max < candies.at(i))
            {
                max=candies.at(i);
            }
        }
        for(int i=0; i < candies.size(); i++)
        {
            if(candies.at(i)+extraCandies >= max)
            {
                ans.push_back(true);
            }
            else
            ans.push_back(false);

        }
        return ans;
    }
};