class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
    string ans(s.size(),'a');
    
    for(int i=0; i<indices.size();i++)
    {
        ans[indices[i]] =s[i];

    }
    return ans;

}
};