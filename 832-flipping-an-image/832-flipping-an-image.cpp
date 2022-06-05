class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
{
        for(int i=0;i<image.size();i++)
        {
            reverse(image.at(i).begin(),image.at(i).end());
            for(int j=0;j < image.at(i).size();j++)
            {
                if(image.at(i).at(j)==0)
                {
                    image.at(i).at(j)=1;
                }
                else
                image.at(i).at(j)=0;
            }
        }
        return image;


    }
};