int search(int* nums, int numsSize, int target) {
    int i=0, low=0, high=numsSize-1;
    int mid=(low+high)/2;
    while (low<=high)
    {
        if (target==nums[mid])
        {
            return mid;
        }
        else if (target>nums[mid])
        {
            low=mid+1;
        }
        else if (target<nums[mid])
        {
            high=mid-1;
        }
        mid = (low+high)/2;
    }
    return -1;
}