void rotate(int* nums, int numsSize, int k) {
    int i=0, temp=0;
    int left=0, right=numsSize-1;

    if (numsSize <= 1)
    return;

    k = k % numsSize;

    if (k == 0)
    return;

    while (left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }

    left=0; 
    right=k-1;
    temp=0;
    while (left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }

    left=k; 
    right=numsSize-1;
    temp=0;
    while (left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}