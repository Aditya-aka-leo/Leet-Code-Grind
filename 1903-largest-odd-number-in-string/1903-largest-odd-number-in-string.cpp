class Solution {
public:
    string largestOddNumber(string num) {
        int size=num.size()-1;
        for(int i=size;i>=0;i--)
        {
            if(num[i]%2==0)
                num.pop_back();
            else break;
        }
        return num;
        
    }
};