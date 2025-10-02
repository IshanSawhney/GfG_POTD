class Solution {
  public:
    vector<vector<int>> ans;
    vector<int> path;
    
    void backtrack(int n, int k, int start, int sum) {
        // if we already exceeded constraints
        if(sum > n || path.size() > k) return;
        
        // valid combination
        if(sum == n && path.size() == k) {
            ans.push_back(path);
            return;
        }
        
        // try numbers from 'start' to 9
        for(int i = start; i <= 9; i++) {
            path.push_back(i);
            backtrack(n, k, i+1, sum+i); // move to next number
            path.pop_back(); // backtrack
        }
    }
    
    vector<vector<int>> combinationSum(int n, int k) {
        ans.clear();
        path.clear();
        backtrack(n, k, 1, 0);
        return ans;
    }
};
