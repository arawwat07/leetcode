int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int temp=0, sum=0, i=0;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]==1)
        {
            sum=sum+1;
            if (temp<sum)
            {
                temp=sum;
            }
        }
        else 
        {
            sum=0;
        }
    }
    return temp;
}