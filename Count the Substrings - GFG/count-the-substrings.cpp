//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int l=0;
            int u=0;
            if(islower(s[i]))
            l=1;
            else
            u=1;
            for(int j=i+1;j<s.size();j++)
            {
               if(islower(s[j]))
               l++;
               else
               u++;
               if(u==l)
               ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends