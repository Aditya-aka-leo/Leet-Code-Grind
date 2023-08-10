//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool solve(int src , vector<int> adj[] , vector<int>& visited)
  {
      queue<pair<int,int>> q;
      q.push({src,-1});
      visited[src]=1;
      while(!q.empty())
      {
          int cur = q.front().first;
          int prev =q.front().second;
          q.pop();
          for(auto i : adj[cur])
          {
              if(!visited[i])
              {
                  q.push({i,cur});
                  visited[i]=1;
              }
              else
              {
                  if(i!=prev)
                  return true;
              }
          }
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> visited (V,0);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(solve(i,adj,visited))
                return 1;
            }
        }
        return false;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends