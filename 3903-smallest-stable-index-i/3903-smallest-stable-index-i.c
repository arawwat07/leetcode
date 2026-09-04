int firstStableIndex(int* nums, int numsSize, int k) {
    int i=0, max=INT_MIN, min=INT_MAX, j=0, l=0;
    while (i<numsSize)
    {
        l=0;
        max=INT_MIN;
        min=INT_MAX;
        while(l<=i)
        {
            if (max<nums[l])
            {
                max=nums[l];
            }
            l++;
        }
        j=i;
        while (j<numsSize)
        {
            if (min>nums[j])
            {
                min=nums[j];
            }
            j++;
        }
        if ((max-min)<=k)
        {
            return i;
        }
        i++;
    }
    return -1;
}