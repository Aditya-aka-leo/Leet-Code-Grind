class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int count=0;
        int temp=0;
        for(int i = 0; i < sentences.size();i++)
        {
            count=0;
            string word; 
            stringstream iss(sentences.at(i));

            while (iss >> word)
            count++;
            if(temp < count)
            {
                temp=count;
            }

        }

        return temp;





    }
};