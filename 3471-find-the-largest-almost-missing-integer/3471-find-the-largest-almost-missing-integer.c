int largestInteger(int* nums, int numsSize, int k) {
    int i=0, j=0, largest=-1, ans=-1;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    int freq[largest+1]={};
    for (int i = 0; i < numsSize; i++) 
    {
        freq[nums[i]]++;
    }
    if (k==1)
    {
        for (int i = largest; i >= 0; i--) {
            if (freq[i] == 1)
                return i;
        }
        return -1;
    }
    if (k == numsSize) {
        for (int i = largest; i >= 0; i--) {
            if (freq[i] > 0)
                return i;
        }
        return -1;
    }
    i=0;
    if (freq[nums[0]]==1)
    {
        ans=nums[0];
    }
    if (freq[nums[numsSize-1]]==1 && nums[numsSize-1]>ans)
    {
        return nums[numsSize-1];
    }
    return ans;
}