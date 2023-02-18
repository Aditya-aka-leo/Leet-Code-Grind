//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int k, vector<long long> GeekNum) {
        // code here
        int i=0,j=0;
        long long sum=0;
        if(k==1)
        return GeekNum[0];
        if(N<=GeekNum.size())
        return GeekNum[N-1];
        while(GeekNum.size()<N)
        {
            if(j-i<k)
            {
                sum=sum+GeekNum[j];
                j++;
            }
            if(j-i==k)
            {
                GeekNum.push_back(sum);
                sum=sum-GeekNum[i];
                i++;
            }
        }
        return GeekNum[N-1];

    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends