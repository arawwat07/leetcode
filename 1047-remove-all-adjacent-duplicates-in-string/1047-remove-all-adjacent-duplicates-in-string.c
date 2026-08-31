void push(int i, char *stack, int *top, char k)
{
    (*top)++;
    stack[*top]=k;
}
void pop(int *top)
{
    (*top)--;
}
char* removeDuplicates(char* s) {
    int len=strlen(s), top=-1, i=0;
    char stack[len], k;
    char *p= (char *)malloc((len+1)*sizeof(char));
    for (i=0; i<len; i++)
    {k=s[i];
        if (top==-1)
        {
            push(i,stack,&top,k);
        }
        else if (stack[top]==k)
        {
            pop(&top);
        }
        else if (stack[top]!=k)
        {
            push (i,stack,&top,k);
        }
    }
    for (i=0; i<=top; i++)
    {
        p[i]=stack[i];
    }
    p[i]='\0';
    return p;
}