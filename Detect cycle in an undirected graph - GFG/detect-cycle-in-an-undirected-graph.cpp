//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool detect(vector<int> adj[] , vector<bool> &visited , int source)
  {
      queue<pair<int,int>> q;
      visited[source]=true;
      q.push({-1,source});
      while(!q.empty())
      {
          int cur = q.front().second;
          int from = q.front().first;
          q.pop();
          for(auto i : adj[cur])
          {
              if(!visited[i])
              {
                  q.push({cur,i});
                  visited[i]=true;
              }
              else if(i!=from)
              return true;
              
          }
      }
      return false;
      
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V,0);
        for(int i = 0; i < V;i++)
        {
            if(!visited[i])
            {
            if(detect(adj,visited,i)==true)
            return true;
            }
        }
        return false;
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