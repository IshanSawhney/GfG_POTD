class Solution {
public:
    int ans=0;
    int dfs(int v,vector<bool>&vis,vector<vector<int>>&adj){
        int cnt=1;
        int res=0;
        vis[v]=true;
        for(auto u:adj[v]){
            if(!vis[u]){
                res=dfs(u,vis,adj);
                if(res%2==0) ans++;
                else cnt+=res;
            }
        }
        return cnt;
    }

	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    // Code here
	    vector<vector<int>>adj(n);
	    vector<bool>vis(n,false);
	    for(auto i : edges){
	        adj[i[0]-1].push_back(i[1]-1);
	        adj[i[1]-1].push_back(i[0]-1);
	    }
	    dfs(0,vis,adj);
	    return ans;
	}
};
