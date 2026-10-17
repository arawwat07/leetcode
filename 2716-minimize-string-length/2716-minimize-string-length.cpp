#include<unordered_map>
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int> freq;
        int i=0;
        for (char c : s)
        {
            freq[c]++;
        }
        return freq.size();
    }
};