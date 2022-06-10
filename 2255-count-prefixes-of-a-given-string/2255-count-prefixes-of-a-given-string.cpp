class Solution {
public:
    int countPrefixes(vector<string>& words, string s)
       {
        int count=0;
        for(int i = 0; i < words.size(); ++i)
        {
            int temp=0;
            for(int j = 0; j < words[i].size(); ++j)
            {
                if(words[i][j]!=s[j])
                temp=-1;
            }
            if(temp!=-1)
            count++;
        }
        return count;
        
    }
};