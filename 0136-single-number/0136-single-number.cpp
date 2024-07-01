class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> l1;
        for(int i=0;i<nums.size();i++)
        {
            l1[nums[i]]++;
        }
        for(auto i:l1)
        {
            if(i.second==1)
                return i.first;
        }
        return 0;
    }
};