int largestInteger(int* nums, int numsSize, int k) {
    int max=-1, i=0, j=0;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]>max)
        {
            max=nums[i];
        }
    }
    int freq[max+1]={};
    int occur[51]={};
    i=0;
    while (i<numsSize)
    {
        for (int i = 0; i < 51; i++) 
        {
        occur[i] = 0;
        }
        if ((k+i)<=numsSize)
        {
        for (j=i; j<k+i; j++)
        {
            occur[nums[j]]++;
            if (occur[nums[j]]<=1)
            {
                freq[nums[j]]++;
            }
        }
        }
        i++;
    }
    int ans=-1;
    for (i=0; i<max+1; i++)
    {
        if (freq[i]==1 && i>ans)
        {
            ans=i;
        }
    }
    return ans;
}