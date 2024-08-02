class Solution {
public:
    int solve(int n,int *dp)
    {
        if(n<=1)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=solve(n-2,dp)+solve(n-1,dp);
    }
    int fib(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(n,dp);
    }
};