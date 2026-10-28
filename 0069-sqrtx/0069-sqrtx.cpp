class Solution {
public:
    int mySqrt(int x) {
        long long l=0, r=x;
        long long sq, mid;
        int ans;
        while (l<=r)
        {
            mid=l+(r-l)/2;
            sq=mid*mid;
            if (sq<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else 
            {
                r=mid-1;
            }
        }
        return ans;
    }
};