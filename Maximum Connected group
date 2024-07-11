class Solution {
  public:
    int dfs(vector<vector<int>>& grid,int i,int j,int index){
        //base case
         int n= grid.size();
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j] !=1){
            return 0;
        }
        //recursive
        grid[i][j] = index;
        int count = dfs(grid,i+1,j,index)+dfs(grid,i-1,j,index)
        +dfs(grid,i,j-1,index)+dfs(grid,i,j+1,index);
        return count +1;
    }
    void neighbours(vector<vector<int>>& grid,int i,int j,set<int> & s){
        int n= grid.size();
        if(i>0){
            s.insert(grid[i-1][j]);
        }
        if(j>0){
            s.insert(grid[i][j-1]);
        }
        if(i<n-1){
            s.insert(grid[i+1][j]);
        }
        if(j<n-1){
            s.insert(grid[i][j+1]);
        }
    }
    int MaxConnection(vector<vector<int>>& grid) {
        // codeGenius
        int n=grid.size(),res=0,index=2,count;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    mp[index]=dfs(grid,i,j,index);
                    res=max(res,mp[index++]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    set<int>s;
                    neighbours(grid,i,j,s);
                    count=1;
                    for(int i:s){
                        count+=mp[i];
                        
                    }
                    res=max(res,count);
                }
            }
        }
        return res;     
    }
};
