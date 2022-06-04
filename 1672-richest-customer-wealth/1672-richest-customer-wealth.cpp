class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int sum = 0;
        for(int i = 0; i<accounts.size();i++)
        {
            vector<int> temp = accounts[i];
            auto it =temp.begin();
            int this_sum=0;
            while(it!=temp.end())
            {
                this_sum=this_sum+*it;
                it++;

            }
            if(this_sum > sum)
            sum=this_sum;
        }
        return sum;
        
    }
    
};