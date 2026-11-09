#include<unordered_map>
#include<string>
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        for (char ch : jewels) {
            mp[ch] = 1;
        }
        int i=0, count=0;
        while (i<stones.length())
        {
            if (mp.find(stones[i])!=mp.end())
            {
                count++;
            }
            i++;
        }
        return count;
    }
};