class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {   
        map<int,int> m1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            x*=x;
            m1[x]++;
        } 
        for(auto i:m1)
        {
            for(int j=0;j<i.second;j++)
                ans.emplace_back(i.first);
        }    
        return ans;
    }
};