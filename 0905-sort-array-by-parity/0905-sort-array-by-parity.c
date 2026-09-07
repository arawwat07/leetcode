/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *p=(int *)malloc(numsSize*sizeof(int));
    int odd[numsSize], even[numsSize], i=0, j=0, k=0;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]%2==0)
        {
            even[j]=nums[i];
            j++;
        }
        else 
        {
            odd[k]=nums[i];
            k++;
        }
    }
    for (i=0; i<j; i++)
    {
        p[i]=even[i];
    }
    for (i=0; i<k; i++)
    {
        p[j]=odd[i];
        j++;
    }
    *returnSize=numsSize;
    return p;
}