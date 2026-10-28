class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0, r=num;
        long long mid, sq;
        while (l<=r)
        {
            mid=l+(r-l)/2;
            sq=mid*mid;
            if (sq==num)
            {
                return true;
            }
            else if (sq<num)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
};