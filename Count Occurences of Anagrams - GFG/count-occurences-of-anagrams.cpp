//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char,int> org;
	    map<char,int> check;
	    int i=0,j=0;
	    int count=0;
	    for(int i=0;i<pat.size();i++)
	    org[pat[i]]++;
	    while(j<txt.size())
	    {
	        if(org.find(txt[j])!=org.end())
	        check[txt[j]]++;
	        if(j-i+1<pat.size())
	        j++;
	        else
	        {
	            if(check==org)
	            count++;
	           
	            if(org.find(txt[i])!=org.end())
	            {
	                check[txt[i]]--;
	            }
	             i++;
	            j++;
	        }
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends