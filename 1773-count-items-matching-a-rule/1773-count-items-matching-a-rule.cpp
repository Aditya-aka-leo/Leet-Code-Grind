class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
   {
        int count=0;
        for(int i = 0 ;i<items.size() ;i++)
        {
            for(int j = 0 ;j<items.at(i).size() ;j++)
            {
                if(ruleKey == "color")
                {
                    if(items.at(i).at(1) == ruleValue)
                    count++;
                    break;
                }
                else if(ruleKey == "type")
                {
                    if(items.at(i).at(0) == ruleValue)
                    count++;
                    break;
                }
                else if(ruleKey == "name")
                {
                    if(items.at(i).at(2) == ruleValue)
                    count++;
                    break;
                }
            }

        }

        return count;

        
    }
};