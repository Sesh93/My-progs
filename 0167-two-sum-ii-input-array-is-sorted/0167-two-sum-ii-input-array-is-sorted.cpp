class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int i=0,j=numbers.size()-1;
        vector<int> x;
        x.reserve(2);
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                x.emplace_back(i+1);
                x.emplace_back(j+1);
            }
            if(numbers[i]+numbers[j]<target)
                i++;
            else
                j--;
        }
        return x;
    }
};