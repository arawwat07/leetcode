#include <iterator>
#include <algorithm>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int value=1;
        vector<int> :: iterator it=nums.begin();
        for(auto it:nums)
        {
            while (value<it)
            {
                ans.push_back(value);
                value++;
            }
            if (value==it)
            {
                value++;
            }
        }
        while (value<=nums.size())
        {
            ans.push_back(value);
            value++;
        }
        return ans;
    }
};