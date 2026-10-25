class Solution {
public:
    int maximumCount(vector<int>& nums) {
         return max(count_if(nums.begin(), nums.end(), [](int n){ return n < 0; }), count_if(nums.begin(), nums.end(), [](int n){ return n > 0; }));
    }
};