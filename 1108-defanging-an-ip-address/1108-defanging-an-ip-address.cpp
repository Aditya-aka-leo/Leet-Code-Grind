class Solution {
public:
    string defangIPaddr(string address)
    {
        int temp = 0;

        string ans;
        int i=0;
        for(; i <address.size(); i++)


        {
            if(address.at(i) == '.')
            {
                char q='[';
                ans.push_back(q);
                q=']';               
                ans.push_back(address.at(i));
                ans.push_back(q);               
            }
            else
            ans.push_back(address.at(i));
        }
        
        return ans;

        
    }
};