class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax = height[0];
        stack<int> rightmax;
        int n = height.size();
        rightmax.push(height[n-1]);
        for(int i=n-1;i>=2;i--)
        {
            int temp = height[i]>rightmax.top() ? height[i] : rightmax.top();
            rightmax.push(temp);
        }
        int trapped = 0;
        for(int i=1;i<n-1;i++)
        {
            int minimum = rightmax.top()<leftmax ? rightmax.top() : leftmax;
            int trap = minimum - height[i];
            trap = trap>0 ? trap : 0;
            trapped+=trap;
            rightmax.pop();
            leftmax = leftmax>height[i] ? leftmax : height[i];
        }
        return trapped;
    }
};