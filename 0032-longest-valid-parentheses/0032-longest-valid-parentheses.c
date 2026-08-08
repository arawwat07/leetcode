int longestValidParentheses(char* str)
{
    int l = strlen(str);
    int stack[l + 1];

    int top = -1;
    int maxLen = 0;

    stack[++top] = -1;

    for (int i = 0; i < l; i++)
    {
        if (str[i] == '(')
        {
            stack[++top] = i;
        }
        else
        {
            top--;

            if (top == -1)
            {
                stack[++top] = i;
            }
            else
            {
                int currentLen = i - stack[top];

                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
        }
    }

    return maxLen;
}