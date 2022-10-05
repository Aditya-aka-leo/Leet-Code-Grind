class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minn=INT_MAX;
        int maxx=-1;
        for(auto i:prices)
        {
            minn=min(minn,i);
            maxx=max(maxx,i-minn);
        }
        return maxx;
    }
};