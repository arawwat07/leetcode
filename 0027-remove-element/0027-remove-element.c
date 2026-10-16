int removeElement(int* nums, int numsSize, int val) {
    int k=0, i=0;
    for (i=0; i<=numsSize-1; i++)
    {
        if (nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}