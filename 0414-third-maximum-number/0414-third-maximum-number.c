int thirdMax(int* nums, int numsSize) {
    int i=0; 
    long third=LONG_MIN, second=LONG_MIN, first=LONG_MIN;
    if (numsSize==1)
    {
        return nums[0];
    }
    if (numsSize==2)
    {
        if (nums[0]>=nums[1])
        {
            return nums[0];
        }
        else 
        {
            return nums[1];
        }
    }
    for (i=0; i<numsSize; i++)
    {
         if (nums[i] == first || nums[i] == second || nums[i] == third)
        continue;

        if (nums[i]>first)
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if (nums[i]>second && nums[i]<first)
        {
            third=second;
            second=nums[i];
        }
        else if (nums[i]>third && nums[i]<second)
        {
            third=nums[i];
        }
    }
    if (third == LONG_MIN)
    {
        return (int)first;
    }
    return third;
}