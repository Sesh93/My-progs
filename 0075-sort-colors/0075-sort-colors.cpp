class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zc=0,oc=0,tc=0,i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zc++;
            else if(nums[i]==1)
                oc++;
            else
                tc++;
        }    
        i=0;
        while(zc--)
        {
            nums[i++]=0;
        }
        while(oc--)
        {
            nums[i++]=1;
        }
        while(tc--)
        {
            nums[i++]=2;
        }
    }
};