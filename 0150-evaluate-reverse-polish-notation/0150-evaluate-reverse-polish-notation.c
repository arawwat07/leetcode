#include<stdlib.h>
void push(int *stack, int *top, int value)
{
    (*top)++;
    stack[*top]=value;
}
void pop(int *stack, int *top, char num)
{
    int ans, right=stack[*top], left=stack[--(*top)];
    if (num=='+')
    {
        ans=left+right;
    }
    if (num=='-')
    {
        ans=left-right;
    }
    if (num=='*')
    {
        ans=left*right;
    }
    if (num=='/')
    {
        ans=left/right;
    }
    stack[*top]=ans;
}
int evalRPN(char** tokens, int tokensSize) {
    int i=0, top=-1, stack[tokensSize], value;
    char num;
    for (i=0; i<tokensSize; i++)
    {
        num=tokens[i][0];
        if ((num>= '0' && num<= '9') || (num== '-' && tokens[i][1]!= '\0'))
        {
            value = atoi(tokens[i]);
            push(stack, &top, value);
        }
        else if (num=='+' || num=='-' || num=='/' || num=='*')
        {
            pop(stack,&top,num);
        }
    }
    return stack[top];
}