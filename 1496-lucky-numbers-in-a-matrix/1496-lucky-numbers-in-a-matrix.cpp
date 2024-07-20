class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_map<int,int> rmap;
        int max=0,i,j;
        int m=matrix.size();
        int n=matrix[0].size();
        for(i=0;i<m;i++)
        {
            max=INT_MAX;
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]<max)
                    max=matrix[i][j];
            }
            rmap[max]++;
        }
        for(i=0;i<n;i++)
        {
            max=0;
            for(j=0;j<m;j++)
            {
                if(matrix[j][i]>max)
                    max=matrix[j][i];
            }
            rmap[max]++;
        }
        max=0;
        for(auto i:rmap)
        {
            if(i.second==2)
            {
                max=i.first;
                break;
            }
        }
        if(max!=0)
        return {max};
        return {};
    }
};