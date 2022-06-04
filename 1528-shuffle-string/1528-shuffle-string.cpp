class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
    string ans;
    unordered_map<int,string> map;
    for(int i = 0; i < indices.size();i++)
    {
        map[indices.at(i)] = s[i];

    }
    for(int i = 0; i < indices.size();i++)
    {
        if(map.find(i) != map.end())
        {
            ans.append(map.find((i))->second);
        }
    }
    return ans;
}
};