class Solution {
  public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<bool> used;
    
    void backtrack(vector<int>& arr) {
        if(path.size() == arr.size()) {
            ans.push_back(path);
            return;
        }
        
        for(int i = 0; i < arr.size(); i++) {
            // Skip already used elements
            if(used[i]) continue;
            
            // Skip duplicates: if same as previous and previous not used
            if(i > 0 && arr[i] == arr[i-1] && !used[i-1]) continue;
            
            used[i] = true;
            path.push_back(arr[i]);
            
            backtrack(arr);
            
            path.pop_back();
            used[i] = false;
        }
    }
    
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // important for duplicates
        used.assign(arr.size(), false);
        backtrack(arr);
        return ans;
    }
};
