class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0; 
        for (i=0; i<nums.size(); i++)
        {
            if ((i+1)!=nums.size())
            {
                if (nums[i]==nums[i+1])
                {
                    return true;
                }
            }
        }
        return false;
    }
};