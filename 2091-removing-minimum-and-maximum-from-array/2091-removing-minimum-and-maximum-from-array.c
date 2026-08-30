#include<limits.h>
int minimumDeletions(int* nums, int numsSize) {
    int i=0, j=0, k=0, a=INT_MIN, b=INT_MAX;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]>a)
        {
            a=nums[i];
            k=i;
        }
    }
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]<b)
        {
            b=nums[i];
            j=i;
        }
    }
    int left, right;
    if (j>k)
    {
        left=k;
        right=j;
    }
    else
    {
        left=j;
        right=k;
    }
    int fromleft=right+1;
    int fromright=numsSize-left;
    int fromboth=(left+1)+(numsSize-right);
    int ans=fromleft;
    if (ans>fromright)
    {
        ans=fromright;
    }
    if (ans>fromboth)
    {
        ans=fromboth;
    }
    return ans;
}