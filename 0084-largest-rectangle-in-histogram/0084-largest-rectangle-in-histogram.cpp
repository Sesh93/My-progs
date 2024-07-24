class Solution {
public:
    vector<int> nextsmaller(vector<int> &heights, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            int curr = heights[i];
            while(!st.empty() && heights[st.top()]>=curr)
            {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevsmaller(vector<int> &heights, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            int curr = heights[i];
            while(!st.empty() && heights[st.top()]>=curr)
            {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) 
    {
        int n = heights.size();
        vector<int> prev = prevsmaller(heights,n);
        vector<int> next = nextsmaller(heights,n);
        int maxi=0;
        int area=0;
        for(int i=0;i<n;i++)
        {
            int l = heights[i];
            if(next[i]==-1)
                next[i]=n;
            int b = (next[i] - prev[i])-1;
            area = l * b;
            maxi = maxi>area?maxi:area;
        }
        return maxi;
    }
};