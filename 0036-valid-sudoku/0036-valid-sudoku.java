class Solution {
    public boolean isValidSudoku(char[][] board) {
        int i,j,p,q;
        char x;
        int cnt1,x1,x2,y1,y2,cnt2;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    cnt1=0;
                    cnt2=0;
                    x=board[i][j];
                    for(p=0;p<9;p++)
                    {
                        for(q=0;q<9;q++)
                        {
                            if(p==i||q==j)
                            {
                                if(x==board[p][q])
                                    cnt1++;
                            }
                            if(cnt1>1)
                                return false;
                        }
                    }
                    if(i>=0&&i<=2)
                    {
                        x1=0;
                        x2=2;
                    }
                    else if(i>=3&&i<=5)
                    {
                        x1=3;
                        x2=5;
                    }
                    else
                    {
                        x1=6;
                        x2=8;
                    }
                    if(j>=0&&j<=2)
                    {
                        y1=0;
                        y2=2;
                    }
                    else if(j>=3&&j<=5)
                    {
                        y1=3;
                        y2=5;
                    }
                    else
                    {
                        y1=6;
                        y2=8;
                    }
                    for(p=x1;p<=x2;p++)
                    {
                        for(q=y1;q<=y2;q++)
                        {
                            if(x==board[p][q])
                                cnt2++;
                            if(cnt2>1)
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
}