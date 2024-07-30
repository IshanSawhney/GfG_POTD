class Solution {
  public:
    vector<string> ans;
    void solve(int i,int j,int n,int m,string s,vector<vector<int>> &vis,vector<vector<int>> &mat){
        //base case
        if(i<0 || j<0 || i>n-1||j>m-1|| vis[i][j]|| mat[i][j]==0) return;
        if(i==n-1 && j==m-1){
            ans.push_back(s);
            return;
        }
        //recursive case
        vis[i][j]=1;
        solve(i+1,j,n,m,s+'D',vis,mat);
        solve(i,j+1,n,m,s+'R',vis,mat);
        solve(i-1,j,n,m,s+'U',vis,mat);
        solve(i,j-1,n,m,s+'L',vis,mat);
        vis[i][j]=0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // codeGenius
        int n =mat.size(),m=mat[0].size();
        if(mat[0][0]==0) return {"-1"};
        vector<vector<int>> vis(n,vector<int>(m,0));
        solve(0,0,n,m,"",vis,mat);
        return ans;
    }
};
