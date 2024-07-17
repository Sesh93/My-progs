class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int a=0,b=0;
        for(int i:stones)
        {
            pq.push(i);
        }
        while(pq.size()>1)
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            if(a==b&&pq.empty())
                return 0;
            else
                pq.push(a-b);
        }
        return pq.top();
    }
};