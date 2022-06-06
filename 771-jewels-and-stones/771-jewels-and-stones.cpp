class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
    int count=0;
    unordered_map<char,int> map;
    for(int i=0; i<stones.size(); i++)
    {
        map[stones[i]]++;
    }
    for(int i=0; i<jewels.size(); i++)
    {
        if(map.find(jewels[i])!=map.end())
        {
            count=count+map.find(jewels[i])->second;
        }
    }
    return count;
    }
    
};