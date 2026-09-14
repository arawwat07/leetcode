/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int len=0;
    if (nums1Size>nums2Size)
    {
        len=nums2Size;
    }
    else 
    {
        len=nums1Size;
    }
    int *p=(int *)malloc(len*sizeof(int));
    int i=0, max1=INT_MIN, max2=INT_MIN;
    for (i=0; i<nums1Size; i++)
    {
        if (max1<nums1[i])
        {
            max1=nums1[i];
        }
    }
    for (i=0; i<nums2Size; i++)
    {
        if (max2<nums2[i])
        {
            max2=nums2[i];
        }
    }
    int size;
    if (max1>max2)
    {
        size=max1+1;
    }
    else 
    {
        size=max2+1;
    }
    int freq[size]={};
    i=0;
    int occur1[max1+1]={};
    while (i<nums1Size)
    {
        occur1[nums1[i]]++;
        if (occur1[nums1[i]]<2)
        {
            freq[nums1[i]]++;
        }
        i++;
    }
    i=0;
    int occur2[max2+1]={};
    while (i<nums2Size)
    {
        occur2[nums2[i]]++;
        if (occur2[nums2[i]]<2)
        {
            freq[nums2[i]]++;
        }
        i++;
    }
    int j=0;
    for (i=0; i<size; i++)
    {
        if (freq[i]==2)
        {
            p[j]=i;
            j++;
        }
    }
    *returnSize=j;
    return p;
}