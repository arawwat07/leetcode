int findNumbers(int* nums, int numsSize) {
    int i=0, k=0, even=0, odd=0; 
    for (i=0; i<numsSize; i++)
    {
        k=0;
        while (nums[i]>0)
        {
            nums[i]=nums[i]/10;
            k++;
        }
        if (k%2==0)
        {
            even++;
        }
    }
    return even;
}