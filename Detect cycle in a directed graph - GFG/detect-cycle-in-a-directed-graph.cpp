//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool dfs(int start , vector<int> &visited , vector<int>& path_visited ,vector<int> adj[] )
  {
      visited[start]=1;
      path_visited[start]=1;
      
      for(auto i : adj[start])
      {
          if(!visited[i])
          {
              if(dfs(i,visited,path_visited,adj) ==true)
             return true;
          }
          else
          {
              if(path_visited[i])
              return true;
          }
      }
      
      
      path_visited[start]=0;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V,0);
        vector<int> path_visited(V,0);
        for(int i =0 ;i<V;i++)
        {
            if(!visited[i] && dfs(i,visited,path_visited,adj) == true)
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends