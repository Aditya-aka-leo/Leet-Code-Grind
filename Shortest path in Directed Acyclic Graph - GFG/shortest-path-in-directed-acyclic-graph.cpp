//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void topo(vector<pair<int,int>> adj[],queue<int>& ans,int N)
  {
      vector<int> indegree(N,0);
      for(int i = 0 ;i<N;i++)
      {
          for(auto j : adj[i])
          {
              indegree[j.first]++;
          }
      }
      queue<int> q;
      for(int i = 0 ; i <N;i++)
      {
          if(indegree[i]==0)
          q.push(i);
      }
      while(!q.empty())
      {
          int  cur = q.front();
          q.pop();
          ans.push(cur);
          for(auto i : adj[cur])
          {
              indegree[i.first]--;
              if(indegree[i.first]==0)
              q.push(i.first);
          }
      }
  }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>> adj[N];
        for(int i =0 ; i <M;i++)
        {
            int node = edges[i][0];
            int con = edges[i][1];
            int wt = edges[i][2];
            adj[node].push_back({con,wt});
        }
        queue<int> topo_sort;
        topo(adj,topo_sort,N);
        vector<int> dist(N,1e9);
        dist[0]=0;
        while(!topo_sort.empty())
        {
            int cur = topo_sort.front();
            topo_sort.pop();
            for(auto i : adj[cur])
            {
                int node = i.first;
                int wt = i.second;
                if(dist[cur] + wt < dist[node])
                    dist[node] = dist[cur]+wt;
                
            }
            
        }
        for(int i =0 ; i<dist.size();i++)
        {
            if(dist[i]==1e9)
            dist[i]=-1;
        }
        return dist;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends