class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string s;
        int i=1;
        for(i=1; i<=n; i++)
        {
            if (i%3==0 && i%5==0)
            {
                s="FizzBuzz";
            }
            else if (i%3==0)
            {
                s="Fizz";
            }
            else if (i%5==0)
            {
                s="Buzz";
            }
            else 
            {
                s=s+to_string(i);
            }
            ans.push_back(s);
            s="";
        }
        return ans;
    }
};