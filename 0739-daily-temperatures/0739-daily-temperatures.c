/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int *p=(int*)malloc(temperaturesSize*sizeof(int));
    int i=0, top=-1, stack[temperaturesSize];
    for (i=0; i<temperaturesSize; i++)
    {
        p[i]=0;
    }
    i=0;
    while (i<temperaturesSize)
    {
        if (top==-1)
        {
            top++;
            stack[top]=i;
        }
        else if (temperatures[i]>temperatures[stack[top]])
        {
            p[stack[top]]=i-stack[top];
            top--;
            while (top >= 0 && temperatures[i] > temperatures[stack[top]])
            {
               p[stack[top]] = i - stack[top];
               top--;
            }
            top++;
            stack[top] = i;
        }
        else if (temperatures[i]<=temperatures[stack[top]])
        {
            top++;
            stack[top]=i;
        }
        i++;
    }
    *returnSize=temperaturesSize;
    return p;
}