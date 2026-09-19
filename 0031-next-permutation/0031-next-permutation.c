void nextPermutation(int* nums, int numsSize) {
    int i=numsSize-2, temp;
    while (i>=0 && nums[i]>=nums[i+1])
    {
        i--;
    }
    if (i>=0)
    {
        int j=numsSize-1;
        while (nums[i]>=nums[j])
        {
            j--;
        }
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    int left=i+1, right=numsSize-1;
    while (left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}