/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *p=(int *)malloc(2*sizeof(int));
    int low=0, high=numsSize-1;
    int mid = (low+high)/2;
    int i=0;
    *(p+i)=-1;
    while (low<=high)
    {
        if (target==nums[mid])
        {
            *(p+i)=mid;
            high=mid-1;
        }
        else if (target>nums[mid])
        {
            low=mid+1;
        }
        else if (target<nums[mid])
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    i++;
    *(p+i)=-1;
    low=0, high=numsSize-1;
    mid = (low+high)/2;
    while (low<=high)
    {
        if (target==nums[mid])
        {
            *(p+i)=mid;
            low=mid+1;
        }
        else if (target>nums[mid])
        {
            low=mid+1;
        }
        else if (target<nums[mid])
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    *returnSize=2;
    return p;
}