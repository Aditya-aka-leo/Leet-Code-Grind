//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    void bfs(int source ,vector<bool> &visited,vector<int> adj[],vector<int> &ans)
    {
        queue<int> q;
        visited[source]=true;
        q.push(source);
        while(!q.empty())
        {
            int cur_node = q.front();
            q.pop();
            ans.push_back(cur_node);
            for(auto i : adj[cur_node])
            {
                if(!visited[i])
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
            
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visited(V,0);
        // for(int i = 0; i < V;i++)
        // {
        //     if(!visited[i])
        //     {
        //         bfs(i,visited,adj,ans);
        //     }
        // }
        bfs(0,visited,adj,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends