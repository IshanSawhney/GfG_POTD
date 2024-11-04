class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>> ans;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int a = arr[i];
            for(int j=i+1; j<n; j++){
                int b = arr[j];
                for(int k=j+1; k<n; k++){
                    int c  = arr[k];
                    if(a+b+c == 0){
                        ans.push_back({i, j, k});
                    }
                }
            }
        }
        return ans;
    }
};
