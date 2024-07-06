class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int h=0;
        int left=0;
        int right=n-1;
        int mid=0;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(n-mid<=citations[mid])
            {
                h=n-mid;
                right=mid-1;
            }
            else
                left=mid+1;
        }
        return h;
    }
};