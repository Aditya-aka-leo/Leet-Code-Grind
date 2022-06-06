class Solution {
public:
    string interpret(string command)
   {
        string ans;
        for(int i = 0; i <command.size(); i++)        
        {
            if(command.at(i) == 'G')
            {
                ans.push_back(command.at(i));
            }
            else if(command.at(i) == '(' && command.at(i+1) == ')')
            {
                char temp='o';
                ans.push_back(temp);
                i++;
            }
            else
            {
                char temp='a';
                ans.push_back(temp);
                temp='l';
                ans.push_back(temp);
                i++;
                i++;
                i++;

            }

        }
        return ans;
    }
};