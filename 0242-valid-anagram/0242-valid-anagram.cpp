class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> map;
        for(auto i:s)
        {
            map[i]++;
        }
        for(auto j:t)
        {
            if(map.find(j)!=map.end())
                map[j]--;
        }
        for(auto j:map)
        {
            if(j.second!=0)
                return false;
        }
        return true;
    }
};