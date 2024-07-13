class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // CodeGenius
        vector<int> parent(n),dist(n,1e9);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        vector<pair<int,int>>adj[n];
        for(auto it: edges){
            int u=it[0]-1,v=it[1]-1,wt=it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        queue <vector<int>>q;
        dist[0]=0;
        q.push({0,0});
        while(q.size()>0){
            vector<int> it=q.front();
            int node_wt=it[0];
            int node=it[1];
            q.pop();
        
        for(auto it:adj[node]){
            int adjnode=it.first;
            int wt=it.second;
            if(dist[adjnode]>wt+node_wt){
                dist[adjnode]=wt+node_wt;
                parent[adjnode]=node;
                q.push({dist[adjnode],adjnode});
            }
            }
        }
        if(dist[n-1]==1e9) return {-1};
        vector<int> path;
        int r=n-1;
        while(r!=0 and r!=parent[r]){
            path.push_back(r+1);
            r=parent[r];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        vector<int> ans;
        ans.push_back(dist[n-1]);
        for(auto it:path){
            ans.push_back(it);
        }
        return ans;
    }
};
