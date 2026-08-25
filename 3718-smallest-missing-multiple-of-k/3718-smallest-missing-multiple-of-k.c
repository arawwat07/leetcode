int missingMultiple(int* nums, int numsSize, int k) {
    int i=0, j=1;
    int ans=k, org=k;
    while (i<numsSize)
    {
        if (nums[i]==k)
        {
            j++;
            k=org*j;
            ans=k;
            i=-1;
        }
        i++;
    }
    return ans;
}