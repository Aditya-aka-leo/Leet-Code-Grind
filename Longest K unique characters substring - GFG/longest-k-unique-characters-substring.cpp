//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
        int longestKSubstr(string s, int k) {
        map<char,int> m;
    int i=0,j=0;
    int ans=0;
        while(j<s.size())
        {
            m[s[j]]++;
            if(m.size()<k)
            j++;
            if(m.size()==k)
            {   
              ans=max(ans,j-i+1);  
              j++;
            }
            if(m.size()>k)
            {
                while(m.size()>k)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    m.erase(s[i]);
                    i++;
                }
                if(m.size()==k)
                ans=max(ans,j-i+1);  
                j++;
            }
        }
        if(ans==0)
        return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends