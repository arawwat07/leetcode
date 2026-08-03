int singleNonDuplicate(int* nums, int numsSize) {
    int temp=0, i=0;
    for (i=0; i<numsSize; i++)
    {
        temp=temp^nums[i];
    }
    return temp;
}