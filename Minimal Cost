class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        // CodeGenius
        int n=arr.size();
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=k && i+j<n;j++){
                dp[i+j]=min(dp[i+j],dp[i]+abs(arr[i]-arr[i+j]));
            }
        }
        return dp[n-1];
    }
};
