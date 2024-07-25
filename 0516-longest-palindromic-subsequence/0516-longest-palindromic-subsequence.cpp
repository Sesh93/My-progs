class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=n-1;i>=0;i--)
        {
            ans[i][i]=1;
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    ans[i][j]=ans[i+1][j-1] + 2;
                }
                else
                {
                    ans[i][j]=max(ans[i+1][j],ans[i][j-1]);
                }
            }
        }
        return ans[0][n-1];
    }
};