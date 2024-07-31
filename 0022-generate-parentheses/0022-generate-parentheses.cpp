class Solution {
public:
    void solve(int i,int open,int close,int n,string s,vector<string> &ans)
    {
        if(i==2*n)
        {
            ans.emplace_back(s);
            return;
        }
        if(open<n)
        {
            solve(i+1,open+1,close,n,s+'(',ans);
        }
        if(close<open)
        {
            solve(i+1,open,close+1,n,s+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0,0,0,n,"",ans);
        return ans;
    }
};