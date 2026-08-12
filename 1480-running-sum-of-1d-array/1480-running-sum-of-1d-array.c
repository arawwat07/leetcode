/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i=0;
    int *p=(int*)malloc(numsSize*sizeof(int));
    *(p+i)=nums[i];
    while (i<numsSize)
    {
        if (i-1>=0 && i-1<numsSize)
        {
            *(p+i)=nums[i]+p[i-1];
        }
        i++;
    }
    *returnSize=numsSize;
    return p;
}