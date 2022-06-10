class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int i=0;
        string ans;
     for(; i <word1.size() && i < word2.size();i++)   
     {
         ans.push_back(word1[i]);
         ans.push_back(word2[i]);
     }
     for(; i < word1.size();i++)
     {
         ans.push_back(word1[i]);
     }
     for(; i < word2.size();i++)
     {
         ans.push_back(word2[i]);
     }
     return ans;
    }
};