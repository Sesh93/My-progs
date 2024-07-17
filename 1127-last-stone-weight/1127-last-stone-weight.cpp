class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int a=0,b=0;
        for(int i:stones)
        {
            pq.push(i);
        }
        while(!pq.empty())
        {
            if(pq.size()==1)
                return pq.top();
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            if(a==b&&pq.empty())
                return 0;
            else
                pq.push(a-b);
        }
        return 0;
    }
};