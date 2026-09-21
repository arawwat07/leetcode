#include <stdlib.h>

int calPoints(char** operations, int operationsSize) {
    int top=-1, prev=-2, i=0, value, sum=0;
    int stack[operationsSize];
    while (i<operationsSize)
    {
        if (operations[i][0]=='-' || (operations[i][0]>='0' && operations[i][0]<='9'))
        {
            value=atoi(operations[i]);
            prev++;
            top++;
            stack[top]=value;
        }
        else if (operations[i][0]=='+')
        {
            value=stack[top]+stack[prev];
            top++;
            prev++;
            stack[top]=value;
        }
        else if (operations[i][0]=='D')
        {
            value=stack[top]*2;
            top++;
            prev++;
            stack[top]=value;
        }
        else if (operations[i][0]=='C')
        {
            top--;
            prev--;
        }
        i++;
    }
    for (i=0; i<=top; i++)
    {
        sum=sum+stack[i];
    }
    return sum;
}