class Solution {
public:
    int solve(vector<int> &cost,int n,int dp[])
    {
        if(n<=1)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=min(cost[n-1]+solve(cost,n-1,dp),cost[n-2]+solve(cost,n-2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(cost,n,dp);
    }
};