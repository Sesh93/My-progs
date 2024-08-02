class Solution {
public:
    int solve(int n,int dp[])
    {
        if(n==2)
            return 1;
        if(n<=1)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
    }
    int tribonacci(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(n,dp);
    }
};