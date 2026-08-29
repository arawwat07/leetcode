int findDuplicate(int* nums, int numsSize) {
    int largest=-1, i=0;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    int freq[largest+1]={}, ans=0;
    for (i=0; i<numsSize; i++)
    {
        freq[nums[i]]++;
    }
    for (i=0; i<largest+1; i++)
    {
        if (freq[i]>1)
        {
            ans=i;
            break;
        }
    }
    return ans;
}