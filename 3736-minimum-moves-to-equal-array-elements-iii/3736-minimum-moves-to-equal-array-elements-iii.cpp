class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int i=0, count=0;
        for (i=0; i<nums.size(); i++)
        {
            count=count+mx-nums[i];
        }
        return count;
    }
};