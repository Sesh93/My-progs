class Solution {
public:
    int passThePillow(int n, int time) {
        int cnt=1,dir=0;
        while(time--)
        {
            if(cnt==n)
                dir=1;
            if(cnt==1)
                dir=0;
            if(dir==0)
                cnt++;
            else
                cnt--;
        }
        return cnt;
    }
};