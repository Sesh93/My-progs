class Solution {
public:
    void solve(int i,int n,vector<vector<int>> &ans,vector<int> &nums,vector<int> op)
    {
        if(i==n)
        {
            ans.emplace_back(op);
            return;
        }
        vector<int> op1;
        vector<int> op2;
        op1=op;
        op2=op;
        op2.emplace_back(nums[i]);
        i++;
        solve(i,n,ans,nums,op1);
        solve(i,n,ans,nums,op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(0,nums.size(),ans,nums,op);
        return ans;
    }
};