class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
       string ans;
        string word=strs[0];
        for(int i=0;i<word.size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=word[i])
                {
                return ans;
                }
            }
            ans=ans+word[i];
        }
        return ans;  
    }
};