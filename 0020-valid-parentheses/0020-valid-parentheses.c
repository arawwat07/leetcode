void push(char *stack, int *top, char k)
{
    (*top)++;
    stack[*top]=k;
}
void pop(int *top)
{
    (*top)--;
}
bool isValid(char* s) {
    int len=strlen(s), i=0, top=-1;
    char k, stack[len];
    for (i=0; i<len; i++)
    {
        k=s[i];
        if (k=='[' || k=='{' || k=='(')
        {
            push(stack,&top,k);
        }
        else if ((top!=-1) && ((stack[top]=='{' && k=='}') || (stack[top]=='(' && k==')') || (stack[top]=='[' && k==']')))
        {
            pop(&top);
        }
        else 
        {
            push(stack,&top,k);
        }
    }
    if (top==-1)
    {
        return true;
    }
    return false;
}