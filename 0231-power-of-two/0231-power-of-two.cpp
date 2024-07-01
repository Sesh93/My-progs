class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int m=n;
        if(m==0)
            return false;
        return !(m&m-1);
    }
};