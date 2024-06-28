class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="++X"||operations[i]=="X++")
                cnt++;
            else
                cnt--;
        }
        return cnt;
    }
};