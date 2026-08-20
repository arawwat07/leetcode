/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int *p=(int*)malloc(numsSize*sizeof(int));
    if (numsSize==1)
    {
        p[0]=nums[0];
        return p;
    }
    int i=0, arr1[numsSize], arr2[numsSize], j=1, k=1;
    arr1[0]=nums[0];
    arr2[0]=nums[1];
    for (i=2; i<numsSize; i++)
    {
        if (arr1[j-1]>arr2[k-1])
        {
            arr1[j]=nums[i];
            j++;
        }
        else
        {
            arr2[k]=nums[i];
            k++;
        }
    }
        for (i=0; i<j; i++)
        {
            p[i]=arr1[i];
        }
        for (i=0; i<k; i++)
        {
            p[j+i]=arr2[i];
        }
    *returnSize=numsSize;
    return p;
}