class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m1;
        unordered_set<int> m2;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            m1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m1.count(nums2[i])==1)
                m2.insert(nums2[i]);
            else
                continue;
        }
        for(auto i:m2)
        {
            ans.emplace_back(i);
        }
        return ans;
    }
};