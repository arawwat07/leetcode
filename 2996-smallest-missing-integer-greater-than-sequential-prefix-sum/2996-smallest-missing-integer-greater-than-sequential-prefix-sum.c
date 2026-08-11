int missingInteger(int* nums, int numsSize) {
    int i=0, j=0, l=0, k=0, sum=0, large=-1;
    if (numsSize==1)
    {
        sum=nums[0]+1;
        return sum;
    }
    while (i<numsSize)
    {
        if (i-1>=0 && i-1<numsSize && nums[i]!=nums[i-1]+1)
        {
            k=i-1;
            break;
        }
        i++;
        if (i==numsSize)
        {
            j=numsSize;
            for (i=0; i<numsSize; i++)
            {
                sum=sum+nums[i];
            }
            return sum;
        }
    }
    for (i=0; i<=k; i++)
    {
        sum=sum+nums[i];
    }
    for (i=k; i<numsSize; i++)
    {
        if (nums[i]>large)
        {
            large=nums[i];
        }
    }
    if (sum>large)
    {
        return sum;
    }
    else if (sum==large)
    {
        return sum+1;
    }
    int freq[large+1]={};
    for (i=0; i<numsSize; i++)
    {
        freq[nums[i]]++;
    }
    int ans=0;
    for (i=sum; i<large+1; i++)
    {
        if (freq[i]==0)
        {
            return i;
        }
    }
    return large+1;
}