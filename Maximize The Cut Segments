class Solution
{
    public:
    int cut(int n, int x, int y, int z,vector<int> &dp){
        //base case
        if(n<0) return INT_MIN;
        else if(n==0) return 0;
        //recursive case
        else if(dp[n]!=0) return dp[n];
        int cutx=cut(n-x,x,y,z,dp);
        int cuty=cut(n-y,x,y,z,dp);
        int cutz=cut(n-z,x,y,z,dp);
        return dp[n]= 1+max(cutx,max(cuty,cutz));
        
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //CodeGenius
        vector<int>dp(n+1,0);
        if(cut(n,x,y,z,dp)<0) return 0;
        return cut(n,x,y,z,dp);
    }
};
