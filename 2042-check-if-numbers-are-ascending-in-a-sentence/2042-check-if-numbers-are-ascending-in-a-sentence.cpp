class Solution {
public:
    bool areNumbersAscending(string s) {
        int i=0, num1=INT_MIN, num2=INT_MIN, j=0, num=0;
        while (i<s.length())
        {
            if (s[i]>='0' && s[i]<='9')
            {
                num=s[i]-'0';
                j=i+1;
                while (j<s.length() && (s[j]>='0' && s[j]<='9'))
                {
                    num=num*10+s[j]-'0';
                    j++;
                }
                num2=num1;
                num1=num;
                if (num2>=num1 && num1!=INT_MIN && num2!=INT_MIN)
                {
                    return false;
                }
            i=j;
            }
            else
            {
            i++;
            }
        }
        return true;
    }
};