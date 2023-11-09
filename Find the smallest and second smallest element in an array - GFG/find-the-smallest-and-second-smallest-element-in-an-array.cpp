//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int>v;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
        
    }
    sort(v.begin(),v.end());
    ans.push_back(v[0]);
    int flag=0;
    for(int i =1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
        ans.push_back(v[i]);
        flag=1;
        break;
        }
        
    }
    if(flag==1)
    return ans;
    
    
    ans[0]=-1;
    return ans;
}