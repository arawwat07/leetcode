/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int size=numsSize*2, i=0;
    int *p=(int *)malloc(size*sizeof(int));
    for (i=0; i<2*numsSize; i++)
    {
            p[i]=nums[i%numsSize];
    }
    *returnSize=size;
    return p;
}