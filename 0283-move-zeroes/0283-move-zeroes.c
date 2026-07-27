void moveZeroes(int* nums, int numsSize) {
    int i=0, j=0, count=0; 
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]==0)
        {
            continue;
        }
        else 
        {
            nums[j]=nums[i];
            j++;
        }
    }
    while (j<numsSize)
    {
        nums[j]=0;
        j++;
    }
    for (j=0; j<numsSize; j++)
    {
        printf("%d ", nums[j]);
    }
}