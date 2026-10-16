#include<unordered_map>
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for (char c : s)
        {
            freq[c]++;
        }
        int i=0;
        for (i=0; i<s.length(); i++)
        {
            char c = s[i];
            if (freq[c]==1)
            {
                return i;
            }
        }
        return -1;
    }
};