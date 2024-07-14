class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<pair<int,int>> m1;
    //     vector<int> v1;
    //     pair<int,int> x;
    //     int key1=0,key2=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         x.first=nums[i];
    //         x.second=i;
    //         m1.emplace_back(x);
    //     }
    //     sort(nums.begin(),nums.end());
    //     int left=0,right=n-1;
    //     while(left<right)
    //     {
    //         if(nums[left]+nums[right]<target)
    //         {
    //             left++;
    //         }
    //         else if(nums[left]+nums[right]>target)
    //         {
    //             right--;
    //         }
    //         else
    //         {
    //             key1=nums[left];
    //             key2=nums[right];
    //             break;
    //         }
    //     }
    //     for(auto i:m1)
    //     {
    //         if(i.first==key1)
    //             v1.emplace_back(i.second);
    //         else if(i.first==key2)
    //             v1.emplace_back(i.second);
    //         else
    //             continue;
    //     }
    //     return v1;
    // }
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        unordered_map<int,int> m1;
        for(int i=0;i<n;i++)
        {
            int complement=target-nums[i];
            if(m1.count(complement))
                return {m1[complement],i};
            else
            {
                m1[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};