class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        // code here
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(abs(a[i]-a[j])==1){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
            int ans=1;
            for(int i=0;i<n;i++){
                ans=max(ans,dp[i]);
            
        }
        return ans;
    }
};
