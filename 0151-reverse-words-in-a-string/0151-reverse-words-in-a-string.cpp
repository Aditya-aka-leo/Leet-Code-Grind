class Solution {
public:
    string reverseWords(string s)
    {
        stack<char> st;
        string s1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==' ' && s[i+1] == ' ')
            {
                int temp=i+1;
                s.erase(s.begin()+temp);
                i--;
            }
        }
        if(s[0]==' ')
            s.erase(s.begin()+0);
        if(s[s.size()-1]==' ')
        {
           int temp=s.size()-1;
            s.erase(s.begin()+temp);
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            st.push(s[i]);
        }
        
        string s2;
        while(!st.empty())
        {
            if(st.top()!=' ')
            s2=s2+st.top();
            if(st.top()==' ')
            {
                s1=s2+s1;
                s1=" "+s1;
                s2="";
            }

            st.pop();
        }
            s1=s2+s1;
        
        return s1;
    }
};